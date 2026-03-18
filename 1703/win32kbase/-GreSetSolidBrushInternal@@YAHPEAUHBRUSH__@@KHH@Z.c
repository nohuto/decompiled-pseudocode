/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0059040
 * Callers:
 *     SetSysColor @ 0x1C0058E00 (SetSysColor.c)
 *     hCreateSolidBrushInternal @ 0x1C0059510 (hCreateSolidBrushInternal.c)
 *     GreSetSolidBrush @ 0x1C00E8300 (GreSetSolidBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z @ 0x1C0030BFC (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0059178 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00591BC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005A6A0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r14d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  struct OBJECT *v11; // rbx
  unsigned int v12; // eax
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rcx
  bool v15; // zf
  int v17; // ecx
  __int64 v18; // rcx
  __int64 Objt; // rax
  unsigned int v20; // [rsp+20h] [rbp-38h]
  struct OBJECT *v21[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v22[8]; // [rsp+38h] [rbp-20h] BYREF
  int v23; // [rsp+40h] [rbp-18h]

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v21, a1);
  v11 = v21[0];
  if ( v21[0] )
  {
    v12 = *((_DWORD *)v21[0] + 12);
    if ( (v12 & 0x10) != 0 && ((v12 & 0x200) == 0 || a4) && ((v12 >> 10) & 1) == a3 )
    {
      v13 = 0LL;
      GreAcquireHmgrSemaphore(v9, v8, v10);
      if ( *((_DWORD *)v11 + 2) == 1 || a4 )
      {
        *((_DWORD *)v11 + 21) = a2;
        v7 = 1;
        HANDLELOCK::HANDLELOCK((HANDLELOCK *)v22, v11, 0);
        if ( HANDLELOCK::bValid((HANDLELOCK *)v22) )
        {
          if ( *((_DWORD *)v11 + 2) == 1 )
          {
            if ( *((_DWORD *)v11 + 27) != -1 )
            {
              v17 = *((_DWORD *)v11 + 12);
              if ( v17 >= 0 )
              {
                v13 = (volatile signed __int32 *)*((_QWORD *)v11 + 16);
                v20 = ((unsigned int)v17 >> 30) & 1;
              }
            }
            *((_DWORD *)v11 + 26) = 0;
            *((_DWORD *)v11 + 27) = -1;
            if ( a4 )
            {
              *((_DWORD *)v11 + 12) &= ~0x80000000;
            }
            else
            {
              *((_DWORD *)v11 + 6) = 7;
              *((_DWORD *)v11 + 12) = 20;
            }
          }
          else
          {
            *((_DWORD *)v11 + 28) = -1;
            LODWORD(v18) = 0;
            *((_DWORD *)v11 + 29) = -1;
            *((_DWORD *)v11 + 30) = -1;
            while ( 1 )
            {
              Objt = HmgSafeNextObjt(v18, 1);
              if ( !Objt )
                break;
              if ( *(struct OBJECT **)(Objt + 1720) == v11 )
                *(_DWORD *)(Objt + 332) |= 1u;
              v18 = *(_QWORD *)Objt;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v22);
        }
        v14 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        v15 = v23 == 0;
        *((_DWORD *)v21[0] + 13) = v14;
        if ( !v15 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v22);
      }
      GreReleaseHmgrSemaphore(v14);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v13, v20);
        *((_QWORD *)v21[0] + 16) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v21);
  return v7;
}
