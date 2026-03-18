/*
 * XREFs of LdrEnumResources @ 0x14071EA80
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400AE2A0 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNames_U @ 0x1404DA6A0 (LdrpCompareResourceNames_U.c)
 */

NTSTATUS __stdcall LdrEnumResources(
        PVOID BaseAddress,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        ULONG *ResourceCount,
        LDR_ENUM_RESOURCE_INFO *Resources)
{
  ULONG v5; // edi
  ULONG v7; // esi
  const wchar_t **v8; // r15
  unsigned __int16 *v9; // rax
  __int64 v10; // rbx
  int v12; // ecx
  int *v13; // r14
  int v14; // eax
  NTSTATUS v15; // ebp
  bool v16; // zf
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdi
  ULONG_PTR v21; // rdi
  int *v22; // rbp
  int v23; // edx
  int v24; // eax
  ULONG v25; // edx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  ULONG_PTR v29; // rsi
  int *v30; // r15
  unsigned int v31; // r13d
  __int64 v32; // rax
  __int64 v33; // rcx
  ULONG_PTR v34; // rcx
  __int64 v35; // rdx
  LDR_ENUM_RESOURCE_INFO *v36; // r9
  unsigned int v37; // [rsp+20h] [rbp-68h]
  ULONG v38; // [rsp+24h] [rbp-64h]
  ULONG v39; // [rsp+28h] [rbp-60h]
  ULONG v40; // [rsp+2Ch] [rbp-5Ch]
  int v41; // [rsp+30h] [rbp-58h]
  int v42; // [rsp+34h] [rbp-54h]
  unsigned int v43; // [rsp+38h] [rbp-50h]
  ULONG Size; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = Level;
  v8 = (const wchar_t **)ResourceInfo;
  v38 = 0;
  if ( Resources )
    v39 = *ResourceCount;
  else
    v39 = 0;
  *ResourceCount = 0;
  v9 = (unsigned __int16 *)RtlImageDirectoryEntryToData(BaseAddress, 1u, 2u, &Size);
  v10 = (__int64)v9;
  if ( !v9 )
    return -1073741687;
  v12 = v9[7];
  v13 = (int *)(v9 + 8);
  v14 = v9[6];
  v15 = 0;
  v16 = v14 + v12 == 0;
  v17 = v14 + v12;
  v42 = 0;
  v37 = v17;
  v41 = 0;
  if ( v16 )
  {
LABEL_37:
    *ResourceCount = v5;
    return v15;
  }
  while ( v7 )
  {
    v18 = LdrpCompareResourceNames_U(*v8, v10, v13);
    v17 = v37;
    if ( !v18 )
      break;
LABEL_35:
    v13 += 2;
    if ( ++v41 >= v17 )
    {
      v5 = v38;
      v15 = v42;
      goto LABEL_37;
    }
  }
  v19 = (unsigned int)v13[1];
  if ( (int)v19 < 0 )
  {
    v20 = (unsigned int)*v13;
    if ( (int)v20 >= 0 )
    {
      v21 = *(unsigned __int16 *)v13;
    }
    else
    {
      LODWORD(v20) = v20 & 0x7FFFFFFF;
      v21 = v10 + v20;
    }
    LODWORD(v19) = v19 & 0x7FFFFFFF;
    v40 = 0;
    v22 = (int *)(v19 + v10 + 16);
    v23 = *(unsigned __int16 *)(v19 + v10 + 14);
    v24 = *(unsigned __int16 *)(v19 + v10 + 12);
    v16 = v24 + v23 == 0;
    v25 = v24 + v23;
    Size = v25;
    if ( !v16 )
    {
      do
      {
        if ( v7 <= 1 || (v26 = LdrpCompareResourceNames_U(v8[1], v10, v22), v25 = Size, !v26) )
        {
          v27 = (unsigned int)v22[1];
          if ( (int)v27 >= 0 )
            return -1073741701;
          v28 = (unsigned int)*v22;
          if ( (int)v28 >= 0 )
          {
            v29 = *(unsigned __int16 *)v22;
          }
          else
          {
            LODWORD(v28) = v28 & 0x7FFFFFFF;
            v29 = v10 + v28;
          }
          LODWORD(v27) = v27 & 0x7FFFFFFF;
          v30 = (int *)(v27 + v10 + 16);
          v31 = 0;
          v43 = *(unsigned __int16 *)(v27 + v10 + 12) + *(unsigned __int16 *)(v27 + v10 + 14);
          if ( v43 )
          {
            do
            {
              if ( Level <= 2
                || !(unsigned int)LdrpCompareResourceNames_U((const wchar_t *)ResourceInfo->Language, v10, v30) )
              {
                v32 = (unsigned int)v30[1];
                if ( (int)v32 < 0 )
                  return -1073741701;
                v33 = (unsigned int)*v30;
                if ( (int)v33 >= 0 )
                {
                  v34 = *(unsigned __int16 *)v30;
                }
                else
                {
                  LODWORD(v33) = v33 & 0x7FFFFFFF;
                  v34 = v10 + v33;
                }
                v35 = 5LL * v38++;
                if ( v38 > v39 )
                {
                  v42 = -1073741820;
                }
                else
                {
                  v36 = Resources;
                  *(&Resources->Type + v35) = v21;
                  *(&v36->Name + v35) = v29;
                  *(&v36->Language + v35) = v34;
                  *((_QWORD *)&v36->Data + v35) = (char *)BaseAddress + *(unsigned int *)(v32 + v10);
                  *(&v36->Size + v35) = *(unsigned int *)(v32 + v10 + 4);
                }
              }
              ++v31;
              v30 += 2;
            }
            while ( v31 < v43 );
            v25 = Size;
          }
          v8 = (const wchar_t **)ResourceInfo;
          v7 = Level;
        }
        v22 += 2;
        ++v40;
      }
      while ( v40 < v25 );
      v17 = v37;
    }
    goto LABEL_35;
  }
  return -1073741701;
}
