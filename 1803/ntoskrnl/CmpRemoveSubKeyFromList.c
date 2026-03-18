/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x140517418
 * Callers:
 *     CmpRemoveSubKey @ 0x140517384 (CmpRemoveSubKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140704BCC (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x1404A33EC (CmpCopyCompressedName.c)
 *     CmpFindSubKeyInRoot @ 0x1404A8BE0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404A8F60 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter2, unsigned int *a2, unsigned int a3)
{
  int v3; // r12d
  _WORD *v5; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  char v9; // bl
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // r15
  wchar_t *Buffer; // r14
  unsigned int v13; // edx
  bool v14; // zf
  unsigned __int16 v15; // ax
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // rax
  size_t v19; // r8
  _WORD *v20; // rdx
  _WORD *v21; // rcx
  _WORD *v23; // r10
  __int64 (__fastcall *v24)(ULONG_PTR, _QWORD, _DWORD *); // rax
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  char v27; // [rsp+30h] [rbp-D0h]
  _DWORD v28[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-BCh]
  int BugCheckParameter3_4; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh]
  _DWORD v34[2]; // [rsp+58h] [rbp-A8h] BYREF
  _WORD *v35; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v38; // [rsp+80h] [rbp-80h]
  _BYTE P[112]; // [rsp+90h] [rbp-70h] BYREF

  v38 = a2;
  v3 = -1;
  v34[1] = 0;
  v34[0] = -1;
  *(_QWORD *)&v28[1] = 0xFFFFFFFFLL;
  v32 = -1;
  v33 = 0;
  v5 = 0LL;
  v27 = 0;
  v35 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v34);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = 1;
  v10 = *(_WORD *)(v7 + 72);
  v11 = v10;
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
  {
    v11 = 2 * v10;
    DestinationString.Length = 2 * v10;
    DestinationString.MaximumLength = 2 * v10;
    if ( (unsigned __int16)(2 * v10) > 0x64u )
    {
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x30344D43u);
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        v9 = 0;
LABEL_15:
        if ( v8 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v34);
        goto LABEL_17;
      }
      v10 = *(_WORD *)(v8 + 72);
    }
    else
    {
      Buffer = (wchar_t *)P;
      DestinationString.Buffer = (wchar_t *)P;
    }
    v27 = 1;
    CmpCopyCompressedName(Buffer, v11, (unsigned __int8 *)(v8 + 76), v10);
  }
  else
  {
    v27 = 0;
    Buffer = (wchar_t *)(v7 + 76);
    DestinationString.Buffer = (wchar_t *)(v7 + 76);
    DestinationString.Length = v10;
    DestinationString.MaximumLength = v10;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v34);
  v8 = 0LL;
  v28[0] = *v38;
  BugCheckParameter3 = *v38;
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v28[1]);
  if ( v5 )
  {
    BugCheckParameter3_4 = 0x80000000;
    if ( *v5 == 26994 )
    {
      BugCheckParameter3_4 = CmpFindSubKeyInRoot(BugCheckParameter2, (__int64)v5, (int)&DestinationString, &v29);
      if ( BugCheckParameter3_4 < 0 )
        goto LABEL_37;
      v32 = v28[1];
      LOWORD(v33) = v28[2];
      *(_QWORD *)&v28[1] = 0LL;
      v24 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
      BugCheckParameter3 = v29;
      v35 = v5;
      v28[1] = -1;
      v5 = (_WORD *)v24(BugCheckParameter2, v29, &v28[1]);
      if ( !v5 )
      {
        v9 = 0;
LABEL_19:
        if ( v35 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
        goto LABEL_21;
      }
    }
    CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (__int64)v5, &DestinationString.Length, &v29, &v37);
    v13 = v37;
    if ( v37 >= 0 )
    {
      v14 = v5[1]-- == 1;
      v15 = v5[1];
      if ( v14 )
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28[1]);
        v5 = 0LL;
        HvFreeCell(BugCheckParameter2, BugCheckParameter3);
        v23 = v35;
        if ( !v35 )
          goto LABEL_14;
        v14 = v35[1]-- == 1;
        v25 = v23[1];
        if ( v14 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
          v35 = 0LL;
          HvFreeCell(BugCheckParameter2, v28[0]);
          goto LABEL_14;
        }
        v3 = v28[0];
        if ( BugCheckParameter3_4 >= (unsigned int)v25 )
          goto LABEL_14;
        v19 = 4LL * ((unsigned int)v25 - BugCheckParameter3_4);
        v20 = &v23[2 * (BugCheckParameter3_4 + 1) + 2];
        v21 = &v23[2 * BugCheckParameter3_4 + 2];
      }
      else
      {
        v3 = v28[0];
        if ( v13 >= v15 )
        {
LABEL_14:
          *v38 = v3;
          goto LABEL_15;
        }
        v16 = v13 + 1;
        v17 = v15 - v13;
        v18 = v13;
        if ( *v5 == 26988 )
        {
          v19 = 4LL * v17;
          v26 = v13 + 1LL;
          v20 = &v5[2 * v16 + 2];
          v21 = &v5[2 * v26];
        }
        else
        {
          v19 = 8LL * v17;
          v20 = &v5[4 * v16 + 2];
          v21 = &v5[4 * v18 + 2];
        }
      }
      memmove(v21, v20, v19);
      goto LABEL_14;
    }
LABEL_37:
    v9 = 0;
LABEL_17:
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28[1]);
    goto LABEL_19;
  }
  v9 = 0;
LABEL_21:
  if ( v27 && Buffer && v11 > 0x64u )
    ExFreePoolWithTag(Buffer, 0);
  return v9;
}
