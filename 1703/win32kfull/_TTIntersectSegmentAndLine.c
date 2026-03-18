/*
 * XREFs of _TTIntersectSegmentAndLine @ 0x1C023BBF4
 * Callers:
 *     _TTAddLineAndSegmentIntersection @ 0x1C023B8D0 (_TTAddLineAndSegmentIntersection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TTIntersectSegmentAndLine(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r12d
  int v6; // r14d
  int v7; // r15d
  int v8; // r11d
  int v9; // r10d
  int v10; // eax
  int v11; // r10d
  int v12; // esi
  int v13; // r11d
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // r10d
  int v17; // eax
  __int64 v19; // [rsp+50h] [rbp+20h]

  v19 = a4;
  v5 = a4 - a1;
  v6 = a2 - a1;
  v7 = HIDWORD(a2) - HIDWORD(a1);
  LODWORD(a4) = 0;
  v8 = (a3 - a1) * (HIDWORD(v19) - HIDWORD(a1)) - (HIDWORD(a3) - HIDWORD(a1)) * (v19 - a1);
  v9 = (a3 - a2) * (HIDWORD(a4) - HIDWORD(a2)) - (v19 - a2) * (HIDWORD(a3) - HIDWORD(a2));
  if ( v8 )
  {
    if ( !v9 )
    {
      *(_QWORD *)a5 = a2;
      goto LABEL_6;
    }
    if ( v8 <= 0 )
      v10 = v8 >> 31;
    else
      v10 = 1;
    if ( v9 <= 0 )
      v11 = v9 >> 31;
    else
      v11 = 1;
    if ( v10 != v11 )
    {
      v12 = v6 * v8;
      v13 = v7 * v8;
      *(_DWORD *)a5 = v12;
      v14 = v6 * (HIDWORD(a4) - HIDWORD(a3)) + v7 * (a3 - a1 - v5);
      *(_DWORD *)(a5 + 4) = v13;
      if ( v12 <= 0 )
        v15 = v12 >> 31;
      else
        v15 = 1;
      v16 = abs32(v14 / 2);
      *(_DWORD *)a5 = a1 + (int)(v12 + v15 * v16) / v14;
      if ( v13 <= 0 )
        v17 = v13 >> 31;
      else
        v17 = 1;
      LODWORD(a4) = 1;
      *(_DWORD *)(a5 + 4) = HIDWORD(a1) + (int)(v13 + v16 * v17) / v14;
    }
  }
  else if ( v9 )
  {
    *(_QWORD *)a5 = a1;
LABEL_6:
    LODWORD(a4) = 1;
  }
  return (unsigned int)a4;
}
