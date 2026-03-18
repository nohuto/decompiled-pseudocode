/*
 * XREFs of Generate_HTSC_WORD @ 0x1C0105F44
 * Callers:
 *     CachedHalftonePattern @ 0x1C00797DC (CachedHalftonePattern.c)
 * Callees:
 *     RotateHTPatXY @ 0x1C000ACA0 (RotateHTPatXY.c)
 *     RotateHTPat45 @ 0x1C000B710 (RotateHTPat45.c)
 *     GenerateWORDPat @ 0x1C0106CD4 (GenerateWORDPat.c)
 *     ExpandHTPatX @ 0x1C0106EE4 (ExpandHTPatX.c)
 */

__int64 __fastcall Generate_HTSC_WORD(__int128 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rax
  int v6; // r8d
  ULONG v7; // r8d
  unsigned __int8 *v8; // r14
  int v9; // ebp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  _WORD *v12; // rax
  _WORD *v13; // rdi
  int v14; // r8d
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  __int128 v18; // [rsp+40h] [rbp-48h]
  char *v19; // [rsp+90h] [rbp+8h]

  if ( *((_BYTE *)a1 + 1) <= 0x11u )
  {
    EngAcquireSemaphore(qword_1C0327AC8);
    v2 = 0;
    v3 = ppwHTPat[*((unsigned __int8 *)a1 + 1)];
    *((_QWORD *)a1 + 2) = v3;
    if ( v3 )
    {
LABEL_3:
      EngReleaseSemaphore(qword_1C0327AC8);
      LOBYTE(v2) = *((_QWORD *)a1 + 2) != 0LL;
      return v2;
    }
    v5 = *(_QWORD *)a1 >> 8;
    v6 = (unsigned __int8)v5;
    v18 = *a1;
    if ( (unsigned __int8)v5 > 9u )
      v6 = (unsigned __int8)v5 + 7;
    v19 = (char *)&DefStdHTPat + 16 * ((unsigned __int64)(unsigned __int8)v5 >> 1);
    v7 = (v6 << 24) + 808539208;
    v8 = (unsigned __int8 *)*((_QWORD *)v19 + 1);
    v9 = (int)v8;
    v10 = WORD4(v18) * (unsigned __int64)WORD5(v18);
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = 6LL * (unsigned int)v10;
      if ( v11 <= 0xFFFFFFFF && HIDWORD(v18) >= (unsigned int)v11 )
      {
        v12 = EngAllocMem(1u, HIDWORD(v18), v7);
        v13 = v12;
        if ( v12 )
        {
          if ( BYTE1(v18) <= 0xFu )
          {
            RotateHTPat45(v8, v12 + 1, WORD2(v18), WORD5(v18), *((unsigned __int16 *)v19 + 1), WORD4(v18));
            if ( (BYTE1(v18) & 1) != 0 )
              v15 = WORD2(v18) >> 1;
            else
              v15 = 0;
            RotateHTPatXY((__int64)(v13 + 1), v13 + 2, WORD2(v18), WORD5(v18), WORD4(v18), v15, 0);
            if ( (BYTE1(v18) & 1) != 0 )
            {
              v16 = WORD2(v18) >> 2;
              v17 = WORD5(v18) >> 2;
            }
            else
            {
              v17 = 0;
              v16 = 0;
            }
            RotateHTPatXY((__int64)(v13 + 1), v13, WORD2(v18), WORD5(v18), WORD4(v18), v16, v17);
            ExpandHTPatX(v13);
          }
          else
          {
            if ( BYTE1(v18) == 16 )
            {
              v14 = (int)v8;
            }
            else
            {
              v14 = (_DWORD)v8 + 512;
              v9 = (_DWORD)v8 + 256;
            }
            if ( !(unsigned int)GenerateWORDPat(v9, (_DWORD)v8, v14, (_DWORD)v12, WORD2(v18), WORD4(v18), WORD5(v18)) )
            {
              EngFreeMem(v13);
              v13 = 0LL;
            }
          }
        }
        *((_QWORD *)a1 + 2) = v13;
        ppwHTPat[BYTE1(v18)] = v13;
        goto LABEL_3;
      }
    }
  }
  return 0LL;
}
