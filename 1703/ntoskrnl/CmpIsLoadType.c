/*
 * XREFs of CmpIsLoadType @ 0x14080ED64
 * Callers:
 *     CmpFindDrivers @ 0x14080EC68 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByName @ 0x1405B67BC (CmpFindSubKeyByName.c)
 *     CmpFindValueByName @ 0x1405B6E28 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x1405B6E58 (CmpValueToData.c)
 *     CmpGetNodeName @ 0x14080F0A8 (CmpGetNodeName.c)
 */

char __fastcall CmpIsLoadType(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int ValueByName; // ebx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v10; // rax
  int v11; // r12d
  ULONG_PTR v12; // rax
  _DWORD *v13; // r14
  void (__fastcall *v14)(ULONG_PTR, __int64 *); // rax
  char v15; // bl
  const WCHAR *NodeName; // rax
  const WCHAR *v17; // r14
  unsigned int SubKeyByName; // eax
  __int64 v19; // rax
  unsigned int v20; // ebx
  ULONG_PTR v21; // rax
  int *v22; // rbx
  int v23; // ebx
  __int64 *v24; // r8
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v28; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v29[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v30[2]; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+58h] BYREF

  v33 = a3;
  v30[1] = 0;
  v32 = 0xFFFFFFFFLL;
  v30[0] = -1;
  ValueByName = -1;
  v34 = 0xFFFFFFFFLL;
  v8 = 0LL;
  v28 = 0xFFFFFFFFLL;
  a6 = 0xFFFFFFFFLL;
  v29[0] = -1;
  v29[1] = 0;
  v9 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  LOWORD(v33) = 0;
  v10 = v9(BugCheckParameter3, a2, v30);
  v11 = v10;
  if ( !v10 )
    return v10;
  if ( a5 )
  {
    NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v10, &v33);
    v17 = NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
      {
        SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, a5, (__int64)&DestinationString);
        if ( SubKeyByName != -1 )
        {
          v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  SubKeyByName,
                  &v34);
          v8 = v19;
          if ( v19 )
          {
            ValueByName = CmpFindValueByName(BugCheckParameter3, v19, (int)&CmpStartString);
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v34);
            v8 = 0LL;
          }
        }
      }
      (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v17, (unsigned __int16)v33);
      if ( ValueByName != -1 )
        goto LABEL_4;
    }
    v20 = CmpFindValueByName(BugCheckParameter3, v11, (int)L"\b\n");
    if ( v20 == -1 )
      goto LABEL_8;
    v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            v20,
            &a6);
    if ( !v21 )
      goto LABEL_8;
    v22 = (int *)CmpValueToData(BugCheckParameter3, v20, v21, &v33, (__int64)&v28);
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &a6);
    if ( !v22 )
      goto LABEL_8;
    v23 = *v22;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v28);
    v24 = &CmpDriverWildcardString;
    if ( (v23 & 0xB) == 0 )
      v24 = &CmpServiceWildcardString;
    v25 = CmpFindSubKeyByName(BugCheckParameter3, a5, (__int64)v24);
    if ( v25 != -1 )
    {
      v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v25,
              &v34);
      v8 = v26;
      if ( v26 )
      {
        ValueByName = CmpFindValueByName(BugCheckParameter3, v26, (int)&CmpStartString);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v34);
        v8 = 0LL;
        if ( ValueByName != -1 )
          goto LABEL_4;
      }
    }
  }
  ValueByName = CmpFindValueByName(BugCheckParameter3, v11, (int)&CmpStartString);
  if ( ValueByName != -1 )
  {
LABEL_4:
    v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            v29);
    if ( v12 )
    {
      v13 = CmpValueToData(BugCheckParameter3, ValueByName, v12, &v33, (__int64)&v32);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
      if ( v13 )
      {
        v14 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16);
        v15 = 1;
        if ( *v13 == 1 )
        {
          v14(BugCheckParameter3, &v32);
          goto LABEL_9;
        }
        v14(BugCheckParameter3, &v32);
      }
    }
  }
LABEL_8:
  v15 = 0;
LABEL_9:
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v34);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v30);
  LOBYTE(v10) = v15;
  return v10;
}
