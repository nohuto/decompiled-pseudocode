/*
 * XREFs of GreSetSolidBrushLight @ 0x1C007F950
 * Callers:
 *     GreDCSelectBrush @ 0x1C00514D0 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x1C007F750 (GreDCSelectPen.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0063810 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 */

__int64 __fastcall GreSetSolidBrushLight(struct OBJECT *a1, int a2, int a3)
{
  unsigned int v3; // ebp
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // rsi
  int v9; // edi
  int v10; // edi
  _BYTE v12[8]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+70h] [rbp+8h]

  v3 = 0;
  if ( a1 )
  {
    v7 = *((_DWORD *)a1 + 12);
    if ( (v7 & 0x10) != 0 && (v7 & 0x200) == 0 && (a3 != 0) == ((v7 >> 10) & 1) )
    {
      v8 = 0LL;
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)v12, a1, 0, 0, 0);
      if ( v13 )
      {
        if ( *((_DWORD *)a1 + 2) == 1 )
        {
          *((_DWORD *)a1 + 21) = a2;
          v3 = 1;
          if ( *((_DWORD *)a1 + 27) == -1 || (v9 = *((_DWORD *)a1 + 12), v9 < 0) )
          {
            v10 = v14;
          }
          else
          {
            v8 = (volatile signed __int32 *)*((_QWORD *)a1 + 16);
            v10 = ((unsigned int)v9 >> 30) & 1;
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
        else
        {
          v10 = v14;
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)v12);
        if ( v13 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v12);
        if ( v8 )
        {
          if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v8, v10);
          *((_QWORD *)a1 + 16) = 0LL;
        }
      }
    }
  }
  return v3;
}
