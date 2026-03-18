/*
 * XREFs of ACPIGetProcessorStatus @ 0x1C0027710
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x1C00074D0 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIGetProcessorStatus(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // esi
  __int64 v5; // r14
  __int64 *v6; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rcx
  char *v12; // r11
  unsigned __int64 v13; // r10
  unsigned __int64 i; // rax
  unsigned __int8 v15; // cl
  unsigned __int64 v16; // r9
  char *v17; // rdx
  char v18; // al
  __int16 v19; // ax
  char v20; // al
  __int64 result; // rax
  __int64 *v22; // rax
  __int64 v23; // r8
  __int16 v24; // ax
  const char *v25; // rcx
  __int16 v26; // ax

  v3 = 0;
  dword_1C0079A2C = 0;
  v5 = 0LL;
  v6 = *(__int64 **)(a1 + 712);
  v8 = 15;
  if ( !v6 || (*(_QWORD *)(a1 + 8) & 0x1000000000LL) == 0 )
    goto LABEL_50;
  if ( *(_WORD *)(*v6 + 66) == 12 )
  {
    v9 = *(_QWORD *)(*v6 + 96);
    if ( v9 )
    {
      v10 = *(unsigned __int8 *)(v9 + 8);
      goto LABEL_6;
    }
LABEL_50:
    v3 = -1073741808;
    goto LABEL_19;
  }
  v22 = AMLIGetNamedChild(v6, 1145656671);
  v5 = (__int64)v22;
  if ( !v22 )
    goto LABEL_16;
  v23 = *v22;
  v24 = *(_WORD *)(*v22 + 66);
  if ( v24 == 1 )
  {
    v10 = *(_DWORD *)(v23 + 80);
  }
  else
  {
    if ( v24 != 8 )
      goto LABEL_16;
    if ( (*(_QWORD *)(a1 + 8) & 0x400000000000LL) == 0 )
      goto LABEL_50;
    v25 = *(const char **)(a1 + 568);
    if ( !v25 )
      goto LABEL_50;
    v10 = _strtoui64(v25, 0LL, 16);
  }
LABEL_6:
  *(_DWORD *)(a1 + 196) = v10;
  v11 = *((_QWORD *)AcpiInformation + 4);
  if ( v11 )
  {
    v12 = (char *)(v11 + 44);
    v13 = v11 + *(unsigned int *)(v11 + 4);
    for ( i = v11 + 46; ; i = v16 + 2 )
    {
      if ( i > v13 )
        goto LABEL_16;
      v15 = v12[1];
      if ( v15 < 2u )
        goto LABEL_16;
      v16 = (unsigned __int64)&v12[v15];
      if ( v16 > v13 )
        goto LABEL_16;
      v17 = v12;
      v12 += v15;
      v18 = *v17;
      if ( *v17 )
      {
        if ( v18 == 11 )
        {
          if ( v15 >= 0x28u )
          {
            v26 = *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL);
            if ( (v26 == 12 || v26 == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0) && *((_DWORD *)v17 + 2) == v10 )
            {
              v20 = v17[12];
              goto LABEL_18;
            }
          }
        }
        else if ( v18 == 9
               && v15 >= 0x10u
               && *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL) == 6
               && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
               && *((_DWORD *)v17 + 3) == v10 )
        {
          if ( (v17[8] & 1) == 0 )
LABEL_16:
            v8 = 0;
          goto LABEL_19;
        }
      }
      else if ( v15 >= 8u )
      {
        v19 = *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL);
        if ( (v19 == 12 || v19 == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0) && (unsigned __int8)v17[2] == v10 )
        {
          v20 = v17[4];
LABEL_18:
          v8 = (v20 & 1) != 0 ? 0xF : 0;
          goto LABEL_19;
        }
      }
    }
  }
  if ( dword_1C0079A2C )
  {
    if ( dword_1C007A320 != v10 )
      goto LABEL_16;
  }
  else
  {
    dword_1C007A320 = v10;
    dword_1C0079A2C = 1;
  }
LABEL_19:
  if ( v5 )
    AMLIDereferenceHandleEx(v5);
  result = v3;
  *a3 = v8;
  return result;
}
