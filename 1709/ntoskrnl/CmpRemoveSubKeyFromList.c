/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x140473308
 * Callers:
 *     CmpRemoveSubKey @ 0x140473274 (CmpRemoveSubKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14069F714 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     HvpGetCellContextMove @ 0x1401E446C (HvpGetCellContextMove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x14047442C (CmpCopyCompressedName.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpFindSubKeyInRoot @ 0x14047FAD0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404814F0 (CmpFindSubKeyInLeafWithStatus.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  int v3; // r12d
  _WORD *v5; // r14
  __int64 v7; // rax
  __int64 v8; // r13
  char v9; // bl
  unsigned __int16 v10; // si
  wchar_t *Buffer; // r15
  __int64 v12; // r9
  bool v13; // zf
  unsigned __int16 v14; // ax
  unsigned int v15; // eax
  size_t v16; // r8
  _WORD *v17; // rdx
  _WORD *v18; // rcx
  _WORD *v20; // r9
  __int64 (__fastcall *v21)(ULONG_PTR, _QWORD, ULONG_PTR *); // rax
  unsigned __int16 v22; // ax
  char v23; // [rsp+30h] [rbp-D0h]
  unsigned int v24; // [rsp+34h] [rbp-CCh]
  ULONG_PTR v25; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-BCh]
  int BugCheckParameter3_4; // [rsp+48h] [rbp-B8h]
  _DWORD v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v30; // [rsp+58h] [rbp-A8h]
  _DWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v33; // [rsp+78h] [rbp-88h] BYREF
  int *v34; // [rsp+80h] [rbp-80h]
  _BYTE P[112]; // [rsp+90h] [rbp-70h] BYREF

  v34 = a2;
  v3 = -1;
  v29[1] = 0;
  v29[0] = -1;
  LODWORD(v25) = -1;
  HIDWORD(v25) = 0;
  v31[0] = -1;
  v31[1] = 0;
  v5 = 0LL;
  v23 = 0;
  v30 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v29);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = 1;
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
  {
    v10 = 2 * *(_WORD *)(v7 + 72);
    DestinationString.Length = v10;
    DestinationString.MaximumLength = v10;
    if ( v10 > 0x64u )
    {
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x30344D43u);
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        v9 = 0;
LABEL_15:
        if ( v8 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
        goto LABEL_17;
      }
    }
    else
    {
      Buffer = (wchar_t *)P;
      DestinationString.Buffer = (wchar_t *)P;
    }
    v23 = 1;
    CmpCopyCompressedName(Buffer, v10, v8 + 76, *(unsigned __int16 *)(v8 + 72));
  }
  else
  {
    v23 = 0;
    Buffer = (wchar_t *)(v7 + 76);
    v10 = *(_WORD *)(v7 + 72);
    DestinationString.Length = v10;
    DestinationString.MaximumLength = v10;
    DestinationString.Buffer = (wchar_t *)(v7 + 76);
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
  v8 = 0LL;
  v24 = *v34;
  BugCheckParameter3 = *v34;
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v25);
  if ( v5 )
  {
    BugCheckParameter3_4 = 0x80000000;
    if ( *v5 == 26994 )
    {
      BugCheckParameter3_4 = CmpFindSubKeyInRoot(BugCheckParameter2, v5, &DestinationString, &v26);
      if ( BugCheckParameter3_4 < 0 )
        goto LABEL_36;
      v30 = v5;
      HvpGetCellContextMove((__int64)v31, (__int64)&v25);
      v21 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(BugCheckParameter2 + 8);
      BugCheckParameter3 = v26;
      v5 = (_WORD *)v21(BugCheckParameter2, v26, &v25);
      if ( !v5 )
      {
        v9 = 0;
LABEL_19:
        if ( v30 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
        goto LABEL_21;
      }
    }
    CmpFindSubKeyInLeafWithStatus(
      BugCheckParameter2,
      (_DWORD)v5,
      (unsigned int)&DestinationString,
      (unsigned int)&v26,
      (__int64)&v33);
    v12 = (unsigned int)v33;
    if ( v33 >= 0 )
    {
      v13 = v5[1]-- == 1;
      v14 = v5[1];
      if ( v13 )
      {
        (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
        v5 = 0LL;
        HvFreeCell(BugCheckParameter2, BugCheckParameter3);
        v20 = v30;
        if ( !v30 )
          goto LABEL_14;
        v13 = v30[1]-- == 1;
        v22 = v20[1];
        if ( v13 )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
          v30 = 0LL;
          HvFreeCell(BugCheckParameter2, v24);
          goto LABEL_14;
        }
        v3 = v24;
        if ( BugCheckParameter3_4 >= (unsigned int)v22 )
          goto LABEL_14;
        v16 = 4LL * ((unsigned int)v22 - BugCheckParameter3_4);
        v17 = &v20[2 * (BugCheckParameter3_4 + 1) + 2];
        v18 = &v20[2 * BugCheckParameter3_4 + 2];
      }
      else
      {
        v3 = v24;
        if ( (unsigned int)v12 >= v14 )
        {
LABEL_14:
          *v34 = v3;
          goto LABEL_15;
        }
        v15 = v14 - (_DWORD)v12;
        if ( *v5 == 26988 )
        {
          v16 = 4LL * v15;
          v17 = &v5[2 * (unsigned int)(v12 + 1) + 2];
          v18 = &v5[2 * v12 + 2];
        }
        else
        {
          v16 = 8LL * v15;
          v17 = &v5[4 * (unsigned int)(v12 + 1) + 2];
          v18 = &v5[4 * v12 + 2];
        }
      }
      memmove(v18, v17, v16);
      goto LABEL_14;
    }
LABEL_36:
    v9 = 0;
LABEL_17:
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
    goto LABEL_19;
  }
  v9 = 0;
LABEL_21:
  if ( v23 && Buffer && v10 > 0x64u )
    ExFreePoolWithTag(Buffer, 0);
  return v9;
}
