/*
 * XREFs of GreSetSolidBrushLight @ 0x1C0077340
 * Callers:
 *     GreDCSelectPen @ 0x1C0076FF0 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C00771F0 (GreDCSelectBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z @ 0x1C0030BFC (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005A6A0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushLight(struct OBJECT *a1, int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // rdi
  int v9; // eax
  _BYTE v11[8]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+60h] [rbp+8h]

  v3 = 0;
  if ( a1 )
  {
    v7 = *((_DWORD *)a1 + 12);
    if ( (v7 & 0x10) != 0 && (v7 & 0x200) == 0 && (a3 != 0) == ((v7 >> 10) & 1) )
    {
      v8 = 0LL;
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)v11, a1, 0);
      if ( HANDLELOCK::bValid((HANDLELOCK *)v11) )
      {
        if ( *((_DWORD *)a1 + 2) == 1 )
        {
          *((_DWORD *)a1 + 21) = a2;
          v3 = 1;
          if ( *((_DWORD *)a1 + 27) != -1 )
          {
            v9 = *((_DWORD *)a1 + 12);
            if ( v9 >= 0 )
            {
              v8 = (volatile signed __int32 *)*((_QWORD *)a1 + 16);
              v13 = ((unsigned int)v9 >> 30) & 1;
            }
          }
          *((_DWORD *)a1 + 26) = 0;
          *((_DWORD *)a1 + 27) = -1;
          *((_DWORD *)a1 + 6) = 7;
          if ( a3 )
            *((_DWORD *)a1 + 12) = *((_DWORD *)a1 + 12) & 0xC00 | 0x10;
          else
            *((_DWORD *)a1 + 12) = 20;
          *((_DWORD *)a1 + 13) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)v11);
      }
      if ( v12 )
        HANDLELOCK::vUnlock((HANDLELOCK *)v11);
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v8, v13);
        *((_QWORD *)a1 + 16) = 0LL;
      }
    }
  }
  return v3;
}
