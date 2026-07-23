/*
 * XREFs of BiBuildIdentifierList @ 0x1407E3440
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1407E33A4 (BiBindEfiNamespaceObjects.c)
 *     BiExportStoreAlterationsToEfi @ 0x1407E49E0 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x140606768 (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x140607E7C (BiEnumerateSubKeys.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140608500 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 *     BiEnumerateBootEntries @ 0x1407E446C (BiEnumerateBootEntries.c)
 *     BiFreeIdentifierList @ 0x1407E4A80 (BiFreeIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407E4DF4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x1407E4F84 (BiGetSavedBootEntry.c)
 *     BiLookupObjectByBootEntry @ 0x1407E5204 (BiLookupObjectByBootEntry.c)
 *     BiLookupObjectByIdentifierAndBootEntry @ 0x1407E5234 (BiLookupObjectByIdentifierAndBootEntry.c)
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
  _QWORD *v34; // r14
  _QWORD *v35; // rbx
  _OWORD *v36; // rcx
  _QWORD *v37; // rax
  PVOID *v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  GUID *v43; // rax
  _QWORD *v44; // rcx
  GUID *v45; // rax
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  ULONG BufferSize; // [rsp+30h] [rbp-79h] BYREF
  char Buffer[4]; // [rsp+34h] [rbp-75h] BYREF
  __int64 v51; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v52; // [rsp+40h] [rbp-69h] BYREF
  _QWORD **v53; // [rsp+48h] [rbp-61h]
  PCWSTR *v54; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v55; // [rsp+58h] [rbp-51h] BYREF
  GUID *v56; // [rsp+60h] [rbp-49h]
  _QWORD *v57; // [rsp+68h] [rbp-41h] BYREF
  GUID *v58; // [rsp+70h] [rbp-39h]
  void *v59; // [rsp+78h] [rbp-31h] BYREF
  PVOID P; // [rsp+80h] [rbp-29h] BYREF
  PVOID v61; // [rsp+88h] [rbp-21h] BYREF
  HANDLE BcdObjectHandle; // [rsp+90h] [rbp-19h] BYREF
  int v63; // [rsp+98h] [rbp-11h] BYREF
  int v64; // [rsp+9Ch] [rbp-Dh]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-9h] BYREF
  GUID Guid; // [rsp+B0h] [rbp+7h] BYREF

  v61 = 0LL;
  v59 = 0LL;
  v58 = (GUID *)&v57;
  a3[1] = a3;
  v57 = &v57;
  *a3 = a3;
  v56 = (GUID *)&v55;
  v4 = 0LL;
  v51 = BcdStoreHandle;
  v55 = &v55;
  v54 = 0LL;
  v53 = &v52;
  v5 = (HANDLE)BcdStoreHandle;
  v52 = &v52;
  v6 = BiOpenKey(BcdStoreHandle, L"Objects", 0x20019u, &v59);
  if ( v6 >= 0 )
  {
    v6 = BiEnumerateSubKeys(v59, &v54, &BufferSize);
    if ( v6 < 0 )
      goto LABEL_65;
    v7 = BufferSize;
    v8 = 0LL;
    if ( BufferSize )
    {
      v9 = v54;
      do
      {
        RtlInitUnicodeString(&DestinationString, v9[v8]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 && BcdOpenObject(v5, &Guid, &BcdObjectHandle) >= 0 )
        {
          v10 = BcdObjectHandle;
          if ( (int)BiGetObjectDescription((__int64)BcdObjectHandle, &v63) >= 0
            && (v64 & 0xF0000000) == 0x10000000
            && (v64 & 0xF00000) == 0x100000 )
          {
            v11 = v64 & 0xFFFFF;
            if ( (v64 & 0xFFFFF) != 1 )
            {
              PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
              v13 = PoolWithTag;
              if ( !PoolWithTag )
              {
                BcdCloseObject(v10);
                v6 = -1073741670;
                goto LABEL_65;
              }
              memset(PoolWithTag, 0, 0x38uLL);
              v13[1] = Guid;
              v13[3].Data1 |= 4u;
              if ( v11 == 0xFFFFF )
              {
                v13[3].Data1 |= 8u;
                v15 = (GUID **)v56;
                if ( *(_QWORD ***)&v56->Data1 != &v55 )
                  __fastfail(3u);
                *(_QWORD *)v13->Data4 = v56;
                *(_QWORD *)&v13->Data1 = &v55;
                *v15 = v13;
                v56 = v13;
              }
              else
              {
                v16 = (GUID **)v58;
                if ( *(_QWORD ***)&v58->Data1 != &v57 )
                  __fastfail(3u);
                *(_QWORD *)v13->Data4 = v58;
                *(_QWORD *)&v13->Data1 = &v57;
                *v16 = v13;
                v58 = v13;
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
          v5 = (HANDLE)v51;
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < v7 );
    }
    v18 = BiEnumerateBootEntries(&v61, &BufferSize);
    v19 = v61;
    v6 = v18;
    if ( v18 >= 0 )
    {
      v20 = BufferSize;
      v21 = 0LL;
      v51 = 0LL;
      v22 = (unsigned int *)v61;
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
            ObjectReferenceFromEfiEntry = BiLookupObjectByIdentifierAndBootEntry(&v57, &Guid, v22[3], &v51);
            v21 = (_DWORD *)v51;
            v24 = 32;
          }
          if ( ObjectReferenceFromEfiEntry < 0 )
          {
            v28 = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
            v51 = (__int64)v28;
            v21 = v28;
            if ( !v28 )
              break;
            memset(v28, 0, 0x38uLL);
            v21[12] |= 8u;
            v29 = v53;
            if ( *v53 != &v52 )
              __fastfail(3u);
            *((_QWORD *)v21 + 1) = v53;
            *(_QWORD *)v21 = &v52;
            *v29 = v21;
            v53 = (_QWORD **)v21;
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
        v33 = v52;
        while ( v33 != &v52 )
        {
          v34 = v33;
          v35 = v33;
          v33 = (_QWORD *)*v33;
          if ( (int)BiLookupObjectByBootEntry(&v55, *((unsigned int *)v34 + 8), &P) >= 0 )
          {
            v36 = P;
            v37 = *(_QWORD **)P;
            if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v38 = (PVOID *)*((_QWORD *)P + 1), *v38 != P) )
              __fastfail(3u);
            *v38 = v37;
            v37[1] = v38;
            *((_OWORD *)v34 + 1) = v36[1];
            *((_DWORD *)v34 + 12) ^= (*((_DWORD *)v34 + 12) ^ *((_DWORD *)v36 + 12)) & 2;
            ExFreePoolWithTag(v36, 0x4B444342u);
            *((_DWORD *)v34 + 12) |= 4u;
            v39 = *v35;
            if ( *(_QWORD **)(*v35 + 8LL) != v35 || (v40 = (_QWORD *)v35[1], (_QWORD *)*v40 != v35) )
              __fastfail(3u);
            *v40 = v39;
            *(_QWORD *)(v39 + 8) = v40;
            v41 = (_QWORD *)a3[1];
            if ( (_QWORD *)*v41 != a3 )
              __fastfail(3u);
            *v35 = a3;
            v35[1] = v41;
            *v41 = v35;
            a3[1] = v35;
          }
        }
        if ( v57 != &v57 )
        {
          v42 = (_QWORD *)a3[1];
          *v42 = v57;
          v43 = v58;
          a3[1] = v58;
          *(_QWORD *)&v43->Data1 = a3;
          v57[1] = v42;
        }
        if ( v55 != &v55 )
        {
          v44 = (_QWORD *)a3[1];
          *v44 = v55;
          v45 = v56;
          a3[1] = v56;
          *(_QWORD *)&v45->Data1 = a3;
          v55[1] = v44;
        }
        if ( v52 != &v52 )
        {
          v46 = (_QWORD *)a3[1];
          *v46 = v52;
          v47 = v53;
          a3[1] = v53;
          *v47 = a3;
          v52[1] = v46;
        }
        v6 = 0;
      }
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0x4B444342u);
LABEL_65:
    v4 = v54;
  }
  if ( v59 )
    BiCloseKey(v59);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v6 < 0 )
  {
    BiFreeIdentifierList(&v52);
    BiFreeIdentifierList(&v55);
    BiFreeIdentifierList(&v57);
    BiFreeIdentifierList(a3);
    BiLogMessage(4LL, L"BiBuildIdentifierList failed %x", (unsigned int)v6);
  }
  return (unsigned int)v6;
}
