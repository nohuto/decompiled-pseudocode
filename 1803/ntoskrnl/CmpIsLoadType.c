/*
 * XREFs of CmpIsLoadType @ 0x1408B9900
 * Callers:
 *     CmpFindDrivers @ 0x1408B97B4 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByName @ 0x140634C70 (CmpFindSubKeyByName.c)
 *     CmpFindValueByName @ 0x1406351C8 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x1406351F8 (CmpValueToData.c)
 *     CmpGetNodeName @ 0x1408B9C34 (CmpGetNodeName.c)
 */

char __fastcall CmpIsLoadType(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int ValueByName; // ebx
  char v10; // di
  __int64 (__fastcall *v11)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v12; // rax
  int v13; // r13d
  __int64 v14; // r14
  ULONG_PTR v15; // rax
  _DWORD *v16; // rbx
  void (__fastcall *v17)(ULONG_PTR, __int64 *); // rax
  const WCHAR *NodeName; // rax
  const WCHAR *v19; // r15
  unsigned int SubKeyByName; // eax
  __int64 v21; // rax
  unsigned int v22; // ebx
  ULONG_PTR v23; // rax
  int *v24; // rbx
  int v25; // ebx
  __int64 *v26; // r8
  unsigned int v27; // eax
  __int64 v28; // rax
  _DWORD v30[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v31[2]; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v33; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+58h] BYREF

  v34 = a3;
  v31[1] = 0;
  v33 = 0xFFFFFFFFLL;
  ValueByName = -1;
  v31[0] = -1;
  v10 = 0;
  v35 = 0xFFFFFFFFLL;
  a8 = 0xFFFFFFFFLL;
  a5 = 0xFFFFFFFFLL;
  v30[0] = -1;
  v30[1] = 0;
  v11 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  LOWORD(v34) = 0;
  v12 = v11(BugCheckParameter3, a2, v31);
  v13 = v12;
  if ( v12 )
  {
    v14 = a6;
    if ( a6 && a7 )
    {
      NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v12, &v34);
      v19 = NodeName;
      if ( NodeName )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
        {
          SubKeyByName = CmpFindSubKeyByName(v14, a7, &DestinationString.Length);
          if ( SubKeyByName != -1 )
          {
            v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v14 + 8))(v14, SubKeyByName, &v35);
            if ( v21 )
            {
              ValueByName = CmpFindValueByName(v14, v21, (int)&CmpStartString);
              (*(void (__fastcall **)(__int64, __int64 *))(v14 + 16))(v14, &v35);
            }
          }
        }
        (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v19, (unsigned __int16)v34);
        if ( ValueByName != -1 )
          goto LABEL_4;
      }
      v22 = CmpFindValueByName(BugCheckParameter3, v13, (int)L"\b\n");
      if ( v22 == -1 )
        goto LABEL_8;
      v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v22,
              &a5);
      if ( !v23 )
        goto LABEL_8;
      v24 = (int *)CmpValueToData(BugCheckParameter3, v22, v23, &v34, (__int64)&a8);
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &a5);
      if ( !v24 )
        goto LABEL_8;
      v25 = *v24;
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &a8);
      v26 = &CmpDriverWildcardString;
      if ( (v25 & 0xB) == 0 )
        v26 = &CmpServiceWildcardString;
      v27 = CmpFindSubKeyByName(v14, a7, (unsigned __int16 *)v26);
      if ( v27 != -1 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v14 + 8))(v14, v27, &v35);
        if ( v28 )
        {
          ValueByName = CmpFindValueByName(v14, v28, (int)&CmpStartString);
          (*(void (__fastcall **)(__int64, __int64 *))(v14 + 16))(v14, &v35);
          if ( ValueByName != -1 )
            goto LABEL_4;
        }
      }
    }
    ValueByName = CmpFindValueByName(BugCheckParameter3, v13, (int)&CmpStartString);
    if ( ValueByName != -1 )
    {
LABEL_4:
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              ValueByName,
              v30);
      if ( v15 )
      {
        v16 = CmpValueToData(BugCheckParameter3, ValueByName, v15, &v34, (__int64)&v33);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v30);
        if ( v16 )
        {
          v17 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16);
          if ( *v16 == 1 )
          {
            v17(BugCheckParameter3, &v33);
            v10 = 1;
          }
          else
          {
            v17(BugCheckParameter3, &v33);
          }
        }
      }
    }
LABEL_8:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v31);
    LOBYTE(v12) = v10;
  }
  return v12;
}
