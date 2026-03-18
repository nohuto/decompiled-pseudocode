/*
 * XREFs of SaveNodeDistanceInformation @ 0x140820034
 * Callers:
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  int v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rax
  _DWORD *v17; // rax
  UNICODE_STRING *Class; // rdi
  _DWORD *v19; // r13
  __int64 v20; // r10
  _DWORD *v21; // r15
  unsigned int v22; // r8d
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
  __int64 v40; // r14
  __int64 *v41; // rdi
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
  _DWORD *v53; // rdx
  unsigned __int16 v54; // r13
  __int64 *v55; // r11
  int v56; // r8d
  unsigned int v57; // edi
  __int64 v58; // kr00_8
  unsigned __int64 *v59; // rax
  _DWORD *v60; // r14
  int v61; // r15d
  __int64 *v62; // r10
  __int64 v63; // r13
  __int64 v64; // r9
  unsigned __int16 v65; // ax
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 *v68; // r11
  __int64 v69; // rax
  unsigned __int16 v70; // cx
  int v71; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-79h] BYREF
  _WORD *v73; // [rsp+50h] [rbp-71h]
  ULONG DataSize; // [rsp+58h] [rbp-69h]
  PVOID Data; // [rsp+60h] [rbp-61h]
  __int64 *v76; // [rsp+68h] [rbp-59h]
  __int64 v77; // [rsp+70h] [rbp-51h]
  ULONG ResultLength; // [rsp+78h] [rbp-49h] BYREF
  UNICODE_STRING ValueName; // [rsp+80h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-21h] BYREF
  char KeyValueInformation[4]; // [rsp+D0h] [rbp+Fh] BYREF
  int v83; // [rsp+D4h] [rbp+13h]
  int v84; // [rsp+D8h] [rbp+17h]
  __int64 v85; // [rsp+DCh] [rbp+1Bh]

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
      v11 = 0;
      if ( (_DWORD)v0 != 1 )
      {
        do
        {
          v12 = v11 + 1;
          v13 = v11 + 1;
          if ( v11 + 1 < (unsigned int)v0 )
          {
            v14 = v12 + (_DWORD)v0 * v11;
            do
            {
              v15 = v10[v14];
              if ( v15 != -1LL )
              {
                v16 = (v15 >> 1) + (v10[v11 + (unsigned int)v0 * v13] >> 1);
                v10[v14] = v16;
                v10[v11 + (unsigned int)v0 * v13] = v16;
              }
              ++v13;
              v14 = (unsigned int)(v14 + 1);
            }
            while ( v13 < (unsigned int)v0 );
          }
          ++v11;
        }
        while ( v12 < (int)v0 - 1 );
      }
      DataSize = 2 * v1 * (v1 + 2) + 4;
      v17 = ExAllocatePoolWithTag(PagedPool, DataSize, 0x2020654Bu);
      Class = 0LL;
      Data = v17;
      v19 = v17;
      if ( v17 )
      {
        v20 = v1 + 1;
        *v17 = v1;
        v21 = &v17[v20];
        v22 = 1;
        v73 = v21;
        if ( (_DWORD)v0 )
        {
          v23 = KeNodeBlock;
          v24 = v0;
          do
          {
            if ( *(_WORD *)(*v23 + 146) == *(_WORD *)(*v23 + 148) )
            {
              v25 = v22++;
              v17[v25] = *(_DWORD *)(*v23 + 160);
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
          v27 = &v17[v20];
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
            v59 = v10;
            do
            {
              if ( *v59 != -1LL )
                *v59 >>= 16;
              ++v59;
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
          v76 = KeNodeBlock;
          v34 = v0;
          v77 = v0;
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
                    goto LABEL_46;
                }
                v37 = v1 * v38;
              }
LABEL_46:
              v40 = v34;
              v41 = KeNodeBlock;
              do
              {
                v42 = *(_WORD *)(*v41 + 146);
                if ( v42 == *(_WORD *)(*v41 + 148) )
                {
                  if ( v10[v42 + (unsigned int)v0 * *(unsigned __int16 *)(v36 + 146)] == 0xFFFF )
                  {
                    v21 = v73;
                  }
                  else
                  {
                    v43 = 0;
                    if ( v1 )
                    {
                      do
                      {
                        v44 = (unsigned int)(v43 + 1);
                        if ( v19[v44] == *(_DWORD *)(*v41 + 160) )
                          break;
                        ++v43;
                      }
                      while ( (unsigned int)v44 < v1 );
                    }
                    v45 = (unsigned int)(v37 + v43);
                    v46 = v10[v42 + (unsigned int)v0 * *(unsigned __int16 *)(v36 + 146)];
                    v21 = v73;
                    v73[v45] = v46;
                    if ( !v46 )
                      *((_WORD *)v21 + v45) = 2;
                  }
                }
                ++v41;
                --v40;
              }
              while ( v40 );
              v33 = v76;
              v34 = v0;
              v35 = v77;
              Class = 0LL;
            }
            ++v33;
            --v35;
            v76 = v33;
            v77 = v35;
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
            *((_WORD *)v21 + v48) = (_WORD)Class;
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
            && v83 == 4
            && v84 == 4 )
          {
            v49 = v85;
            if ( (unsigned int)(v85 - 1) > 0x31 )
              v49 = 10;
          }
          v50 = (__int64)KeyHandle;
        }
        v51 = (char)Class;
        v52 = (unsigned int)Class;
        if ( (_DWORD)v0 )
        {
          v53 = KeNodeDistance;
          v54 = KeNumberNodes;
          v55 = KeNodeBlock;
          v73 = KeNodeDistance;
          while ( 1 )
          {
            if ( *(_WORD *)(*v55 + 146) != *(_WORD *)(*v55 + 148) )
              goto LABEL_73;
            v56 = (int)Class;
            while ( 1 )
            {
              if ( v52 == v56 || *(_WORD *)(KeNodeBlock[v56] + 146) != *(_WORD *)(KeNodeBlock[v56] + 148) )
                goto LABEL_70;
              v57 = v53[v56 + v52 * (unsigned __int16)KeNumberNodes];
              v58 = (int)(LODWORD(v10[(unsigned int)v0 * v52 + v56]) - v57);
              if ( 100 * ((HIDWORD(v58) ^ (unsigned int)v58) - HIDWORD(v58)) / v49 > v57 )
                break;
              v53 = v73;
LABEL_70:
              if ( ++v56 >= (unsigned int)v0 )
                goto LABEL_71;
            }
            v51 = 1;
LABEL_71:
            LODWORD(Class) = 0;
            if ( v51 )
            {
              if ( v50 == -1 )
              {
                v60 = v73;
              }
              else
              {
                RtlInitUnicodeString(&ValueName, L"Node Distance");
                ZwSetValueKey((HANDLE)v50, &ValueName, 0, 3u, Data, DataSize);
                v54 = KeNumberNodes;
                v60 = KeNodeDistance;
              }
              v61 = v54;
              v62 = KeNodeBlock;
              v63 = v0;
              do
              {
                v64 = *v62;
                v65 = *(_WORD *)(*v62 + 148);
                if ( *(_WORD *)(*v62 + 146) != v65 )
                  v64 = KeNodeBlock[v65];
                v66 = v63;
                v67 = (unsigned int)((_DWORD)Class * v61);
                v68 = KeNodeBlock;
                do
                {
                  v69 = *v68;
                  v70 = *(_WORD *)(*v68 + 148);
                  if ( *(_WORD *)(*v68 + 146) != v70 )
                    v69 = KeNodeBlock[v70];
                  v71 = *(unsigned __int16 *)(v69 + 146);
                  if ( *(_WORD *)(v64 + 146) == (_WORD)v71 )
                    v60[v67] = 0;
                  else
                    v60[v67] = v10[v71 + (unsigned int)v0 * *(unsigned __int16 *)(v64 + 146)];
                  v67 = (unsigned int)(v67 + 1);
                  ++v68;
                  --v66;
                }
                while ( v66 );
                LODWORD(Class) = (_DWORD)Class + 1;
                ++v62;
                v63 = v0;
              }
              while ( (unsigned int)Class < (unsigned int)v0 );
              goto LABEL_74;
            }
            v53 = v73;
LABEL_73:
            ++v52;
            ++v55;
            if ( v52 >= (unsigned int)v0 )
            {
LABEL_74:
              v19 = Data;
              break;
            }
          }
        }
      }
      ExFreePoolWithTag(v10, 0);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
    }
    if ( KeyHandle != (HANDLE)-1LL )
      ZwClose(KeyHandle);
  }
}
