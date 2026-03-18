/*
 * XREFs of SaveNodeDistanceInformation @ 0x140850634
 * Callers:
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void SaveNodeDistanceInformation()
{
  __int64 v0; // rbx
  unsigned int v1; // esi
  __int64 *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rax
  __int16 v5; // dx
  __int16 v6; // cx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v10; // r12
  UNICODE_STRING *Class; // rdi
  int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // r13
  __int64 v20; // r10
  unsigned int v21; // r8d
  _DWORD *v22; // r15
  __int64 *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  _WORD *v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r8
  unsigned __int64 *v32; // rdx
  __int64 *v33; // r10
  __int64 v34; // r11
  __int64 v35; // rcx
  __int64 v36; // r9
  int v37; // r8d
  int v38; // ecx
  __int64 v39; // rdx
  __int64 *v40; // rdi
  __int64 v41; // r14
  unsigned __int16 v42; // ax
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int16 v46; // ax
  unsigned int v47; // edx
  __int64 v48; // rax
  unsigned int v49; // r14d
  __int64 v50; // rsi
  char v51; // r10
  unsigned int v52; // r9d
  __int64 *v53; // r11
  int v54; // r8d
  unsigned int v55; // edi
  __int64 v56; // kr00_8
  unsigned __int64 *v57; // rax
  int v58; // r15d
  __int64 *v59; // r10
  unsigned int v60; // r8d
  __int64 v61; // r13
  __int64 v62; // r9
  unsigned __int16 v63; // ax
  __int64 v64; // r14
  __int64 v65; // rdi
  __int64 *v66; // r11
  __int64 v67; // rax
  unsigned __int16 v68; // cx
  unsigned __int16 v69; // cx
  unsigned __int16 v70; // dx
  HANDLE KeyHandle; // [rsp+48h] [rbp-79h] BYREF
  ULONG DataSize; // [rsp+50h] [rbp-71h]
  _DWORD *v73; // [rsp+58h] [rbp-69h]
  __int64 *v74; // [rsp+60h] [rbp-61h]
  __int64 v75; // [rsp+68h] [rbp-59h]
  ULONG ResultLength; // [rsp+70h] [rbp-51h] BYREF
  _DWORD *v77; // [rsp+78h] [rbp-49h]
  UNICODE_STRING ValueName; // [rsp+80h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-21h] BYREF
  char KeyValueInformation[4]; // [rsp+D0h] [rbp+Fh] BYREF
  int v82; // [rsp+D4h] [rbp+13h]
  int v83; // [rsp+D8h] [rbp+17h]
  __int64 v84; // [rsp+DCh] [rbp+1Bh]

  KeyHandle = (HANDLE)-1LL;
  v0 = (unsigned __int16)KeNumberNodes;
  v1 = 0;
  if ( !KeNumberNodes )
    goto LABEL_7;
  v2 = KeNodeBlock;
  v3 = (unsigned __int16)KeNumberNodes;
  do
  {
    v4 = *v2++;
    v5 = *(_WORD *)(v4 + 146);
    v6 = *(_WORD *)(v4 + 148);
    v7 = v1 + 1;
    if ( v5 != v6 )
      v7 = v1;
    v1 = v7;
    --v3;
  }
  while ( v3 );
  if ( v7 != 1 )
  {
LABEL_7:
    v8 = (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * (int)v8, 0x616D754Eu);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, KiActualNodeCost, 8LL * (int)v8);
      Class = 0LL;
      v12 = 0;
      if ( (_DWORD)v0 != 1 )
      {
        do
        {
          v13 = v12 + 1;
          v14 = v12 + 1;
          if ( v12 + 1 < (unsigned int)v0 )
          {
            v15 = v13 + (_DWORD)v0 * v12;
            do
            {
              v16 = v10[v15];
              if ( v16 != -1LL )
              {
                v17 = (v10[v12 + (unsigned int)v0 * v14] >> 1) + (v16 >> 1);
                v10[v15] = v17;
                v10[v12 + (unsigned int)v0 * v14] = v17;
              }
              ++v14;
              v15 = (unsigned int)(v15 + 1);
            }
            while ( v14 < (unsigned int)v0 );
          }
          ++v12;
        }
        while ( v13 < (int)v0 - 1 );
        Class = 0LL;
      }
      DataSize = 2 * v1 * (v1 + 2) + 4;
      v18 = ExAllocatePoolWithTag(PagedPool, DataSize, 0x2020654Bu);
      v77 = v18;
      v19 = v18;
      if ( v18 )
      {
        v20 = v1 + 1;
        *v18 = v1;
        v21 = 1;
        v22 = &v18[v20];
        v73 = v22;
        if ( (_DWORD)v0 )
        {
          v23 = KeNodeBlock;
          v24 = v0;
          do
          {
            if ( *(_WORD *)(*v23 + 146) == *(_WORD *)(*v23 + 148) )
            {
              v25 = v21++;
              v18[v25] = *(_DWORD *)(*v23 + 160);
            }
            ++v23;
            --v24;
          }
          while ( v24 );
          Class = 0LL;
        }
        if ( v1 * v1 )
        {
          v26 = v1 * v1;
          v27 = &v18[v20];
          while ( v26 )
          {
            *v27++ = -1;
            --v26;
          }
          Class = 0LL;
        }
        v28 = 1LL;
        if ( v8 )
        {
          v29 = v10;
          v30 = v8;
          v31 = v8;
          do
          {
            if ( v28 < *v29 && *v29 != -1LL )
              v28 = *v29;
            ++v29;
            --v31;
          }
          while ( v31 );
          if ( v28 > 0x1000000000000LL )
          {
            v28 >>= 16;
            v57 = v10;
            do
            {
              if ( *v57 != -1LL )
                *v57 >>= 16;
              ++v57;
              --v30;
            }
            while ( v30 );
          }
          Class = 0LL;
        }
        if ( v8 )
        {
          v32 = v10;
          Class = (UNICODE_STRING *)v8;
          do
          {
            if ( *v32 == -1LL )
              *v32 = 0xFFFFLL;
            else
              *v32 = (0x8000000000000000uLL / v28 * *v32) >> 48;
            ++v32;
            Class = (UNICODE_STRING *)((char *)Class - 1);
          }
          while ( Class );
        }
        if ( (_DWORD)v0 )
        {
          v33 = KeNodeBlock;
          v75 = v0;
          v74 = KeNodeBlock;
          v34 = v0;
          v35 = v0;
          do
          {
            v36 = *v33;
            if ( *(_WORD *)(*v33 + 146) == *(_WORD *)(*v33 + 148) )
            {
              v37 = (int)Class;
              v38 = (int)Class;
              if ( v1 )
              {
                while ( 1 )
                {
                  v39 = (unsigned int)(v38 + 1);
                  if ( v19[v39] == *(_DWORD *)(v36 + 160) )
                    break;
                  ++v38;
                  if ( (unsigned int)v39 >= v1 )
                    goto LABEL_47;
                }
                v37 = v1 * v38;
              }
LABEL_47:
              v40 = KeNodeBlock;
              v41 = v34;
              do
              {
                v42 = *(_WORD *)(*v40 + 146);
                if ( v42 == *(_WORD *)(*v40 + 148) )
                {
                  if ( v10[v42 + (unsigned int)v0 * *(unsigned __int16 *)(v36 + 146)] == 0xFFFF )
                  {
                    v22 = v73;
                  }
                  else
                  {
                    v43 = 0;
                    if ( v1 )
                    {
                      do
                      {
                        v44 = (unsigned int)(v43 + 1);
                        if ( v19[v44] == *(_DWORD *)(*v40 + 160) )
                          break;
                        ++v43;
                      }
                      while ( (unsigned int)v44 < v1 );
                    }
                    v45 = (unsigned int)(v37 + v43);
                    v46 = v10[v42 + (unsigned int)v0 * *(unsigned __int16 *)(v36 + 146)];
                    v22 = v73;
                    *((_WORD *)v73 + v45) = v46;
                    if ( !v46 )
                      *((_WORD *)v22 + v45) = 2;
                  }
                }
                ++v40;
                --v41;
              }
              while ( v41 );
              v33 = v74;
              v34 = v0;
              v35 = v75;
              Class = 0LL;
            }
            ++v33;
            --v35;
            v74 = v33;
            v75 = v35;
          }
          while ( v35 );
          LODWORD(v20) = v1 + 1;
        }
        v47 = (unsigned int)Class;
        if ( v1 )
        {
          do
          {
            v48 = v47 * (unsigned int)v20;
            ++v47;
            *((_WORD *)v22 + v48) = (_WORD)Class;
          }
          while ( v47 < v1 );
        }
        v49 = 10;
        RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\NUMA");
        RtlInitUnicodeString(&ValueName, L"Variation Threshold");
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = Class;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, Class, (ULONG)Class, (PULONG)&Class->Length) < 0 )
        {
          v50 = -1LL;
          KeyHandle = (HANDLE)-1LL;
        }
        else
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 &ResultLength) >= 0
            && v82 == 4
            && v83 == 4 )
          {
            v49 = v84;
            if ( (unsigned int)(v84 - 1) > 0x31 )
              v49 = 10;
          }
          v50 = (__int64)KeyHandle;
        }
        v51 = (char)Class;
        v52 = (unsigned int)Class;
        if ( (_DWORD)v0 )
        {
          v53 = KeNodeBlock;
          while ( 1 )
          {
            if ( *(_WORD *)(*v53 + 146) == *(_WORD *)(*v53 + 148) )
            {
              v54 = (int)Class;
              while ( 1 )
              {
                if ( v52 != v54 && *(_WORD *)(KeNodeBlock[v54] + 146) == *(_WORD *)(KeNodeBlock[v54] + 148) )
                {
                  v55 = *((_DWORD *)KeNodeDistance + v54 + v52 * (unsigned __int16)KeNumberNodes);
                  v56 = (int)(LODWORD(v10[(unsigned int)v0 * v52 + v54]) - v55);
                  if ( 100 * ((HIDWORD(v56) ^ (unsigned int)v56) - HIDWORD(v56)) / v49 > v55 )
                    break;
                }
                if ( ++v54 >= (unsigned int)v0 )
                  goto LABEL_71;
              }
              v51 = 1;
LABEL_71:
              LODWORD(Class) = 0;
              if ( v51 )
                break;
            }
            ++v52;
            ++v53;
            if ( v52 >= (unsigned int)v0 )
              goto LABEL_73;
          }
          if ( v50 != -1 )
          {
            RtlInitUnicodeString(&ValueName, L"Node Distance");
            ZwSetValueKey((HANDLE)v50, &ValueName, 0, 3u, v19, DataSize);
          }
          v58 = (unsigned __int16)KeNumberNodes;
          v59 = KeNodeBlock;
          v60 = 0;
          v61 = v0;
          do
          {
            v62 = *v59;
            v63 = *(_WORD *)(*v59 + 148);
            if ( *(_WORD *)(*v59 + 146) != v63 )
              v62 = KeNodeBlock[v63];
            v64 = v61;
            v65 = v60 * v58;
            v66 = KeNodeBlock;
            do
            {
              v67 = *v66;
              v68 = *(_WORD *)(*v66 + 148);
              if ( *(_WORD *)(*v66 + 146) != v68 )
                v67 = KeNodeBlock[v68];
              v69 = *(_WORD *)(v62 + 146);
              v70 = *(_WORD *)(v67 + 146);
              if ( v69 == v70 )
                *((_DWORD *)KeNodeDistance + v65) = 0;
              else
                *((_DWORD *)KeNodeDistance + v65) = v10[v70 + (unsigned int)v0 * v69];
              v65 = (unsigned int)(v65 + 1);
              ++v66;
              --v64;
            }
            while ( v64 );
            ++v60;
            ++v59;
            v61 = v0;
          }
          while ( v60 < (unsigned int)v0 );
          v19 = v77;
        }
      }
LABEL_73:
      ExFreePoolWithTag(v10, 0);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
    }
    if ( KeyHandle != (HANDLE)-1LL )
      ZwClose(KeyHandle);
  }
}
