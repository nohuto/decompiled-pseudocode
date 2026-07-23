/*
 * XREFs of BiBuildIdentifierList @ 0x14077AA54
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14077A9B8 (BiBindEfiNamespaceObjects.c)
 *     BiExportStoreAlterationsToEfi @ 0x14077BF94 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x1405AE19C (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x1405AE9F8 (BiEnumerateSubKeys.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiEnumerateBootEntries @ 0x14077BA34 (BiEnumerateBootEntries.c)
 *     BiFreeIdentifierList @ 0x14077C034 (BiFreeIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14077C3A8 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x14077C538 (BiGetSavedBootEntry.c)
 *     BiLookupObjectByBootEntry @ 0x14077C7B4 (BiLookupObjectByBootEntry.c)
 *     BiLookupObjectByIdentifierAndBootEntry @ 0x14077C7E4 (BiLookupObjectByIdentifierAndBootEntry.c)
 */

__int64 __fastcall BiBuildIdentifierList(__int64 BcdStoreHandle, __int64 a2, _QWORD *a3)
{
  PCWSTR *v4; // rsi
  HANDLE v5; // r14
  int v6; // ebx
  ULONG v7; // r12d
  __int64 v8; // r15
  PCWSTR *v9; // r13
  HANDLE v10; // r14
  int v11; // esi
  GUID *PoolWithTag; // rax
  GUID *v13; // rbx
  BCD_FLAGS v14; // r8d
  GUID **v15; // rax
  GUID **v16; // rax
  PVOID v17; // rcx
  int v18; // eax
  _BYTE *v19; // r15
  unsigned __int64 v20; // r12
  _DWORD *v21; // rbx
  unsigned int *v22; // rsi
  int ObjectReferenceFromEfiEntry; // eax
  int v24; // r13d
  _QWORD *v25; // rax
  PVOID *v26; // rcx
  _QWORD *v27; // rax
  _DWORD *v28; // rax
  _QWORD *v29; // rax
  _DWORD *v30; // rax
  _DWORD *v31; // r14
  __int64 v32; // rax
  _QWORD *v33; // rsi
  _QWORD *v34; // rbx
  _OWORD *v35; // rcx
  _QWORD *v36; // rax
  PVOID *v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rcx
  GUID *v42; // rax
  _QWORD *v43; // rcx
  GUID *v44; // rax
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  ULONG BufferSize; // [rsp+30h] [rbp-79h] BYREF
  _QWORD *v49; // [rsp+38h] [rbp-71h] BYREF
  _QWORD **v50; // [rsp+40h] [rbp-69h]
  char Buffer[8]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v52; // [rsp+50h] [rbp-59h] BYREF
  PCWSTR *v53; // [rsp+58h] [rbp-51h] BYREF
  _QWORD *v54; // [rsp+60h] [rbp-49h] BYREF
  GUID *v55; // [rsp+68h] [rbp-41h]
  _QWORD *v56; // [rsp+70h] [rbp-39h] BYREF
  GUID *v57; // [rsp+78h] [rbp-31h]
  void *v58; // [rsp+80h] [rbp-29h] BYREF
  PVOID P; // [rsp+88h] [rbp-21h] BYREF
  PVOID v60; // [rsp+90h] [rbp-19h] BYREF
  HANDLE BcdObjectHandle; // [rsp+98h] [rbp-11h] BYREF
  int v62; // [rsp+A0h] [rbp-9h] BYREF
  int v63; // [rsp+A4h] [rbp-5h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-1h] BYREF
  GUID Guid; // [rsp+B8h] [rbp+Fh] BYREF

  v60 = 0LL;
  v58 = 0LL;
  v57 = (GUID *)&v56;
  a3[1] = a3;
  v56 = &v56;
  *a3 = a3;
  v55 = (GUID *)&v54;
  v4 = 0LL;
  v52 = BcdStoreHandle;
  v54 = &v54;
  v53 = 0LL;
  v50 = &v49;
  v5 = (HANDLE)BcdStoreHandle;
  v49 = &v49;
  v6 = BiOpenKey(BcdStoreHandle, L"Objects", 0x20019u, &v58);
  if ( v6 >= 0 )
  {
    v6 = BiEnumerateSubKeys(v58, &v53, &BufferSize);
    if ( v6 < 0 )
      goto LABEL_62;
    v7 = BufferSize;
    v8 = 0LL;
    if ( BufferSize )
    {
      v9 = v53;
      do
      {
        RtlInitUnicodeString(&DestinationString, v9[v8]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 && BcdOpenObject(v5, &Guid, &BcdObjectHandle) >= 0 )
        {
          v10 = BcdObjectHandle;
          if ( (int)BiGetObjectDescription((__int64)BcdObjectHandle, &v62) >= 0
            && (v63 & 0xF0000000) == 0x10000000
            && (v63 & 0xF00000) == 0x100000 )
          {
            v11 = v63 & 0xFFFFF;
            if ( (v63 & 0xFFFFF) != 1 )
            {
              PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
              v13 = PoolWithTag;
              if ( !PoolWithTag )
              {
                BcdCloseObject(v10);
                v6 = -1073741670;
                goto LABEL_62;
              }
              memset(PoolWithTag, 0, 0x38uLL);
              v13[1] = Guid;
              v13[3].Data1 |= 4u;
              if ( v11 == 0xFFFFF )
              {
                v13[3].Data1 |= 8u;
                v15 = (GUID **)v55;
                if ( *(_QWORD ***)&v55->Data1 != &v54 )
                  __fastfail(3u);
                *(_QWORD *)v13->Data4 = v55;
                *(_QWORD *)&v13->Data1 = &v54;
                *v15 = v13;
                v55 = v13;
              }
              else
              {
                v16 = (GUID **)v57;
                if ( *(_QWORD ***)&v57->Data1 != &v56 )
                  __fastfail(3u);
                *(_QWORD *)v13->Data4 = v57;
                *(_QWORD *)&v13->Data1 = &v56;
                *v16 = v13;
                v57 = v13;
              }
              BufferSize = 2;
              if ( BcdGetElementDataWithFlags(v10, 0x16000082u, v14, Buffer, &BufferSize) >= 0 && Buffer[0] )
                v13[3].Data1 |= 0x10u;
              if ( (int)BiGetSavedBootEntry(v10, &P) >= 0 )
              {
                v17 = P;
                v13[2].Data1 = *((_DWORD *)P + 2);
                v13[3].Data1 |= 2u;
                ExFreePoolWithTag(v17, 0x4B444342u);
              }
            }
          }
          BcdCloseObject(v10);
          v5 = (HANDLE)v52;
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < v7 );
    }
    v18 = BiEnumerateBootEntries(&v60, &BufferSize);
    v19 = v60;
    v6 = v18;
    if ( v18 >= 0 )
    {
      v20 = BufferSize;
      v21 = 0LL;
      v52 = 0LL;
      v22 = (unsigned int *)v60;
      if ( BufferSize )
      {
        while ( 1 )
        {
          ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(v22 + 1, &Guid);
          if ( ObjectReferenceFromEfiEntry < 0 )
          {
            v24 = 0;
          }
          else
          {
            ObjectReferenceFromEfiEntry = BiLookupObjectByIdentifierAndBootEntry(&v56, &Guid, v22[3], &v52);
            v21 = (_DWORD *)v52;
            v24 = 32;
          }
          if ( ObjectReferenceFromEfiEntry < 0 )
          {
            v28 = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
            v52 = (__int64)v28;
            v21 = v28;
            if ( !v28 )
              break;
            memset(v28, 0, 0x38uLL);
            v21[12] |= 8u;
            v29 = v50;
            if ( *v50 != &v49 )
              __fastfail(3u);
            *((_QWORD *)v21 + 1) = v50;
            *(_QWORD *)v21 = &v49;
            *v29 = v21;
            v50 = (_QWORD **)v21;
          }
          else
          {
            v25 = *(_QWORD **)v21;
            if ( *(_DWORD **)(*(_QWORD *)v21 + 8LL) != v21 || (v26 = (PVOID *)*((_QWORD *)v21 + 1), *v26 != v21) )
              __fastfail(3u);
            *v26 = v25;
            v25[1] = v26;
            v27 = (_QWORD *)a3[1];
            if ( (_QWORD *)*v27 != a3 )
              __fastfail(3u);
            *(_QWORD *)v21 = a3;
            *((_QWORD *)v21 + 1) = v27;
            *v27 = v21;
            a3[1] = v21;
          }
          v30 = ExAllocatePoolWithTag(PagedPool, v22[2], 0x4B444342u);
          v31 = v30;
          if ( !v30 )
            break;
          memmove(v30, v22 + 1, v22[2]);
          *((_QWORD *)v21 + 5) = v31;
          v21[8] = v31[2];
          v21[12] = v24 | v21[12] & 0xFFFFFFDF | 1;
          v32 = *v22;
          if ( (_DWORD)v32 )
          {
            v22 = (unsigned int *)((char *)v22 + v32);
            if ( (char *)v22 - v19 < v20 )
              continue;
          }
          goto LABEL_43;
        }
        v6 = -1073741670;
      }
      else
      {
LABEL_43:
        v33 = v49;
        if ( v49 != &v49 )
        {
          do
          {
            v34 = v33;
            v33 = (_QWORD *)*v33;
            if ( (int)BiLookupObjectByBootEntry(&v54, *((unsigned int *)v34 + 8), &P) >= 0 )
            {
              v35 = P;
              v36 = *(_QWORD **)P;
              if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v37 = (PVOID *)*((_QWORD *)P + 1), *v37 != P) )
                __fastfail(3u);
              *v37 = v36;
              v36[1] = v37;
              *((_OWORD *)v34 + 1) = v35[1];
              *((_DWORD *)v34 + 12) ^= (*((_DWORD *)v34 + 12) ^ *((_DWORD *)v35 + 12)) & 2;
              ExFreePoolWithTag(v35, 0x4B444342u);
              *((_DWORD *)v34 + 12) |= 4u;
              v38 = *v34;
              if ( *(_QWORD **)(*v34 + 8LL) != v34 || (v39 = (_QWORD *)v34[1], (_QWORD *)*v39 != v34) )
                __fastfail(3u);
              *v39 = v38;
              *(_QWORD *)(v38 + 8) = v39;
              v40 = (_QWORD *)a3[1];
              if ( (_QWORD *)*v40 != a3 )
                __fastfail(3u);
              *v34 = a3;
              v34[1] = v40;
              *v40 = v34;
              a3[1] = v34;
            }
          }
          while ( v33 != &v49 );
          v33 = v49;
        }
        if ( v56 != &v56 )
        {
          v41 = (_QWORD *)a3[1];
          *v41 = v56;
          v42 = v57;
          a3[1] = v57;
          *(_QWORD *)&v42->Data1 = a3;
          v56[1] = v41;
          v33 = v49;
        }
        if ( v54 != &v54 )
        {
          v43 = (_QWORD *)a3[1];
          *v43 = v54;
          v44 = v55;
          a3[1] = v55;
          *(_QWORD *)&v44->Data1 = a3;
          v54[1] = v43;
          v33 = v49;
        }
        if ( v33 != &v49 )
        {
          v45 = (_QWORD *)a3[1];
          *v45 = v33;
          v46 = v50;
          a3[1] = v50;
          *v46 = a3;
          v49[1] = v45;
        }
        v6 = 0;
      }
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0x4B444342u);
LABEL_62:
    v4 = v53;
  }
  if ( v58 )
    BiCloseKey(v58);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v6 < 0 )
  {
    BiFreeIdentifierList(&v49);
    BiFreeIdentifierList(&v54);
    BiFreeIdentifierList(&v56);
    BiFreeIdentifierList(a3);
    BiLogMessage(4LL, L"BiBuildIdentifierList failed %x", (unsigned int)v6);
  }
  return (unsigned int)v6;
}
