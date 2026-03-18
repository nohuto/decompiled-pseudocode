/*
 * XREFs of ACPIGetProcessorStatus @ 0x1C00259D4
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x1C0010510 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall ACPIGetProcessorStatus(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // esi
  volatile signed __int32 *v5; // r14
  __int64 *v6; // rcx
  int v8; // ebx
  __int64 v9; // rax
  __int16 v10; // dx
  int v11; // r8d
  __int64 v12; // rcx
  char *v13; // r9
  unsigned __int64 v14; // r10
  unsigned __int8 v15; // al
  char *v16; // rdx
  char v17; // al
  __int16 v18; // ax
  char v19; // al
  __int64 result; // rax
  __int64 *v21; // rax
  __int64 v22; // r8
  __int16 v23; // ax
  const char *v24; // rcx
  __int16 v25; // ax

  v3 = 0;
  dword_1C007796C = 0;
  v5 = 0LL;
  v6 = *(__int64 **)(a1 + 712);
  v8 = 15;
  if ( !v6 )
    goto LABEL_50;
  if ( (*(_QWORD *)(a1 + 8) & 0x1000000000LL) == 0 )
    goto LABEL_50;
  v9 = *v6;
  v10 = *(_WORD *)(*v6 + 66);
  if ( v10 == 12 && !*(_QWORD *)(v9 + 96) )
    goto LABEL_50;
  if ( v10 == 12 )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(v9 + 96) + 8LL);
    goto LABEL_7;
  }
  v21 = AMLIGetNamedChild(v6, 1145656671);
  v5 = (volatile signed __int32 *)v21;
  if ( !v21 )
    goto LABEL_16;
  v22 = *v21;
  v23 = *(_WORD *)(*v21 + 66);
  if ( v23 != 1 )
  {
    if ( v23 != 8 )
      goto LABEL_16;
    v24 = *(const char **)(a1 + 568);
    if ( (*(_QWORD *)(a1 + 8) & 0x400000000000LL) != 0 && v24 )
    {
      v11 = _strtoui64(v24, 0LL, 16);
      goto LABEL_7;
    }
LABEL_50:
    v3 = -1073741808;
    goto LABEL_19;
  }
  v11 = *(_DWORD *)(v22 + 80);
LABEL_7:
  *(_DWORD *)(a1 + 196) = v11;
  v12 = *((_QWORD *)AcpiInformation + 4);
  if ( v12 )
  {
    v13 = (char *)(v12 + 44);
    v14 = v12 + *(unsigned int *)(v12 + 4);
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (unsigned __int64)(v13 + 2) > v14 )
            goto LABEL_16;
          v15 = v13[1];
          if ( v15 < 2u || (unsigned __int64)&v13[v15] > v14 )
            goto LABEL_16;
          v16 = v13;
          v13 += v15;
          v17 = *v16;
          if ( *v16 || (unsigned __int8)v16[1] < 8u )
            break;
          v18 = *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL);
          if ( (v18 == 12 || v18 == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0) && (unsigned __int8)v16[2] == v11 )
          {
            v19 = v16[4];
LABEL_18:
            v8 = (v19 & 1) != 0 ? 0xF : 0;
            goto LABEL_19;
          }
        }
        if ( v17 != 11 || (unsigned __int8)v16[1] < 0x28u )
          break;
        v25 = *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL);
        if ( (v25 == 12 || v25 == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0) && *((_DWORD *)v16 + 2) == v11 )
        {
          v19 = v16[12];
          goto LABEL_18;
        }
      }
    }
    while ( v17 != 9
         || (unsigned __int8)v16[1] < 0x10u
         || *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL) != 6
         || (*(_QWORD *)(a1 + 8) & 0x1000000000LL) == 0
         || *((_DWORD *)v16 + 3) != v11 );
    if ( (v16[8] & 1) == 0 )
      goto LABEL_16;
    goto LABEL_19;
  }
  if ( !dword_1C007796C )
  {
    dword_1C0078260 = v11;
    dword_1C007796C = 1;
    goto LABEL_19;
  }
  if ( dword_1C0078260 != v11 )
LABEL_16:
    v8 = 0;
LABEL_19:
  if ( v5 )
    AMLIDereferenceHandleEx(v5, 0LL);
  result = v3;
  *a3 = v8;
  return result;
}
