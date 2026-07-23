/*
 * XREFs of LdrEnumResources @ 0x1800DB230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_18009A1F4 @ 0x18009A1F4 (sub_18009A1F4.c)
 */

NTSTATUS __cdecl LdrEnumResources(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        ULONG *ResourceCount,
        PLDR_ENUM_RESOURCE_ENTRY Resources)
{
  unsigned int v5; // r13d
  ULONG v7; // esi
  const wchar_t **v8; // r14
  ULONG v9; // edi
  NTSTATUS v10; // eax
  __int64 v11; // rbx
  int v13; // ecx
  int *v14; // r15
  int v15; // eax
  NTSTATUS v16; // ebp
  bool v17; // zf
  unsigned int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  ULONG_PTR v21; // rdi
  int *v22; // rbp
  int v23; // edx
  int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  ULONG_PTR v28; // rsi
  int *v29; // r14
  ULONG_PTR v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  PLDR_ENUM_RESOURCE_ENTRY v33; // r9
  char v34; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-77h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-74h]
  unsigned int v37; // [rsp+38h] [rbp-70h]
  ULONG v38; // [rsp+3Ch] [rbp-6Ch]
  ULONG v39; // [rsp+40h] [rbp-68h]
  unsigned int v40; // [rsp+44h] [rbp-64h]
  int v41; // [rsp+48h] [rbp-60h]
  int v42; // [rsp+4Ch] [rbp-5Ch]
  __int64 v43; // [rsp+50h] [rbp-58h] BYREF
  DWORD v47; // [rsp+C8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = Level;
  v8 = (const wchar_t **)ResourceInfo;
  v9 = 0;
  v38 = 0;
  if ( Resources )
    v39 = *ResourceCount;
  else
    v39 = 0;
  *ResourceCount = 0;
  v10 = sub_18001014C((unsigned __int64)DllHandle, 1, 2u, &v47, (char **)&v43);
  v11 = v43;
  if ( v10 < 0 )
    v11 = 0LL;
  if ( !v11 )
    return -1073741687;
  v13 = *(unsigned __int16 *)(v11 + 14);
  v14 = (int *)(v11 + 16);
  v15 = *(unsigned __int16 *)(v11 + 12);
  v16 = 0;
  v17 = v15 + v13 == 0;
  v18 = v15 + v13;
  v42 = 0;
  v37 = v18;
  v41 = 0;
  if ( v17 )
  {
LABEL_39:
    *ResourceCount = v9;
    return v16;
  }
  while ( v7 )
  {
    v19 = sub_18009A1F4(0LL, 0LL, *v8, v11, v14, &v47);
    v18 = v37;
    if ( !v19 )
      break;
LABEL_37:
    v14 += 2;
    if ( ++v41 >= v18 )
    {
      v9 = v38;
      v16 = v42;
      goto LABEL_39;
    }
  }
  v20 = (unsigned int)v14[1];
  if ( (int)v20 < 0 )
  {
    v21 = (unsigned int)*v14;
    if ( (v21 & 0x80000000) == 0LL )
    {
      v21 = (unsigned __int16)v21;
    }
    else
    {
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      v21 += v11;
    }
    LODWORD(v20) = v20 & 0x7FFFFFFF;
    v40 = 0;
    v22 = (int *)(v20 + v11 + 16);
    v23 = *(unsigned __int16 *)(v20 + v11 + 14);
    v24 = *(unsigned __int16 *)(v20 + v11 + 12);
    v17 = v24 + v23 == 0;
    v25 = v24 + v23;
    v36 = v25;
    if ( !v17 )
    {
      do
      {
        if ( v7 <= 1 || (v26 = sub_18009A1F4(0LL, 0LL, v8[1], v11, v22, &v34), v25 = v36, !v26) )
        {
          v27 = (unsigned int)v22[1];
          if ( (int)v27 >= 0 )
            return -1073741701;
          v28 = (unsigned int)*v22;
          if ( (v28 & 0x80000000) == 0LL )
          {
            v28 = (unsigned __int16)v28;
          }
          else
          {
            LODWORD(v28) = v28 & 0x7FFFFFFF;
            v28 += v11;
          }
          LODWORD(v27) = v27 & 0x7FFFFFFF;
          v29 = (int *)(v27 + v11 + 16);
          LODWORD(v43) = *(unsigned __int16 *)(v27 + v11 + 12) + *(unsigned __int16 *)(v27 + v11 + 14);
          if ( (_DWORD)v43 )
          {
            do
            {
              if ( Level <= 2
                || !(unsigned int)sub_18009A1F4(0LL, 0LL, (const wchar_t *)ResourceInfo->Language, v11, v29, v35) )
              {
                if ( v29[1] < 0 )
                  return -1073741701;
                v30 = (unsigned int)*v29;
                if ( (v30 & 0x80000000) == 0LL )
                {
                  v30 = (unsigned __int16)v30;
                }
                else
                {
                  LODWORD(v30) = v30 & 0x7FFFFFFF;
                  v30 += v11;
                }
                v31 = (unsigned int)v29[1];
                v32 = v38++;
                if ( v38 > v39 )
                {
                  v42 = -1073741820;
                }
                else
                {
                  v33 = Resources;
                  Resources[v32].Path[0].NameOrId = v21;
                  v33[v32].Path[1].NameOrId = v28;
                  v33[v32].Path[2].NameOrId = v30;
                  v33[v32].Data = (char *)DllHandle + *(unsigned int *)(v31 + v11);
                  *(_QWORD *)&v33[v32].Size = *(unsigned int *)(v31 + v11 + 4);
                }
              }
              ++v5;
              v29 += 2;
            }
            while ( v5 < (unsigned int)v43 );
            v25 = v36;
          }
          v8 = (const wchar_t **)ResourceInfo;
          v5 = 0;
          v7 = Level;
        }
        v22 += 2;
        ++v40;
      }
      while ( v40 < v25 );
      v18 = v37;
    }
    goto LABEL_37;
  }
  return -1073741701;
}
