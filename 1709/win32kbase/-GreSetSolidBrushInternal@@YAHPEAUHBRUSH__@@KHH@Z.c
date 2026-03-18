/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00635C4
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C001E170 (hCreateSolidBrushInternal.c)
 *     SetSysColor @ 0x1C0063380 (SetSysColor.c)
 *     GreSetSolidBrush @ 0x1C00EDA00 (GreSetSolidBrush.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00636F8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006373C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0063810 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r14d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  struct OBJECT *v11; // rbx
  unsigned int v12; // eax
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  bool v17; // zf
  int v19; // ecx
  __int64 v20; // rcx
  __int64 Objt; // rax
  unsigned int v22; // [rsp+30h] [rbp-38h]
  struct OBJECT *v23[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-20h] BYREF
  int v25; // [rsp+50h] [rbp-18h]

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v23, a1);
  v11 = v23[0];
  if ( v23[0] )
  {
    v12 = *((_DWORD *)v23[0] + 12);
    if ( (v12 & 0x10) != 0 && ((v12 & 0x200) == 0 || a4) && ((v12 >> 10) & 1) == a3 )
    {
      v13 = 0LL;
      GreAcquireHmgrSemaphore(v9, v8, v10);
      if ( *((_DWORD *)v11 + 2) == 1 || a4 )
      {
        *((_DWORD *)v11 + 21) = a2;
        v7 = 1;
        HANDLELOCK::HANDLELOCK((HANDLELOCK *)v24, v11, 0, 0, 0);
        if ( v25 )
        {
          if ( *((_DWORD *)v11 + 2) == 1 )
          {
            if ( *((_DWORD *)v11 + 27) != -1 )
            {
              v19 = *((_DWORD *)v11 + 12);
              if ( v19 >= 0 )
              {
                v13 = (volatile signed __int32 *)*((_QWORD *)v11 + 16);
                v22 = ((unsigned int)v19 >> 30) & 1;
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
            v20 = 0LL;
            *((_DWORD *)v11 + 29) = -1;
            *((_DWORD *)v11 + 30) = -1;
            while ( 1 )
            {
              LOBYTE(v14) = 1;
              Objt = HmgSafeNextObjt(v20, v14);
              if ( !Objt )
                break;
              if ( *(struct OBJECT **)(Objt + 1720) == v11 )
                *(_DWORD *)(Objt + 332) |= 1u;
              v20 = *(_QWORD *)Objt;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v24);
        }
        v15 = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        v17 = v25 == 0;
        *((_DWORD *)v23[0] + 13) = v15;
        if ( !v17 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v24);
      }
      GreReleaseHmgrSemaphore(v15, v14, v16);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v13, v22);
        *((_QWORD *)v23[0] + 16) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v23);
  return v7;
}
