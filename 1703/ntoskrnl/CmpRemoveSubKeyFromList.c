/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x1404D1F10
 * Callers:
 *     CmpRemoveSubKey @ 0x1404D1E7C (CmpRemoveSubKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140674B74 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     HvpGetCellContextMove @ 0x14003C438 (HvpGetCellContextMove.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpCopyCompressedName @ 0x1404D2CB0 (CmpCopyCompressedName.c)
 *     CmpFindSubKeyInRoot @ 0x1405016A0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140501DA0 (CmpFindSubKeyInLeafWithStatus.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  _WORD *v5; // r14
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  char v9; // bl
  unsigned __int16 v10; // si
  wchar_t *Buffer; // r15
  int SubKeyInRoot; // r12d
  __int64 v13; // r9
  bool v14; // zf
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  size_t v17; // r8
  _WORD *v18; // rdx
  _WORD *v19; // rcx
  int v20; // eax
  _WORD *v22; // r9
  unsigned __int16 v23; // ax
  char v24; // [rsp+30h] [rbp-D0h]
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-CCh]
  unsigned int BugCheckParameter3_4; // [rsp+38h] [rbp-C8h]
  _DWORD v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v30; // [rsp+58h] [rbp-A8h]
  _DWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v33; // [rsp+78h] [rbp-88h] BYREF
  int *v34; // [rsp+80h] [rbp-80h]
  _BYTE P[112]; // [rsp+90h] [rbp-70h] BYREF

  v34 = a2;
  v30 = 0LL;
  v29[1] = 0;
  v29[0] = -1;
  v27[0] = -1;
  v31[0] = -1;
  v5 = 0LL;
  v27[1] = 0;
  v31[1] = 0;
  v6 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v29);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = 1;
  v10 = *(_WORD *)(v7 + 72);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
  {
    v10 *= 2;
    DestinationString.Length = v10;
    DestinationString.MaximumLength = v10;
    if ( v10 > 0x64u )
    {
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x30344D43u);
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        v9 = 0;
LABEL_16:
        if ( v8 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
        goto LABEL_18;
      }
    }
    else
    {
      Buffer = (wchar_t *)P;
      DestinationString.Buffer = (wchar_t *)P;
    }
    v24 = 1;
    CmpCopyCompressedName(Buffer, v10, v8 + 76, *(unsigned __int16 *)(v8 + 72));
  }
  else
  {
    Buffer = (wchar_t *)(v7 + 76);
    v24 = 0;
    DestinationString.Buffer = (wchar_t *)(v7 + 76);
    DestinationString.Length = v10;
    DestinationString.MaximumLength = v10;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
  v8 = 0LL;
  BugCheckParameter3_4 = *v34;
  BugCheckParameter3 = *v34;
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  (unsigned int)*v34,
                  v27);
  if ( v5 )
  {
    SubKeyInRoot = 0x80000000;
    if ( *v5 == 26994 )
    {
      SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter2, v5, &DestinationString, &v28);
      if ( SubKeyInRoot < 0 )
        goto LABEL_37;
      BugCheckParameter3 = BugCheckParameter3_4;
      v30 = v5;
      HvpGetCellContextMove((__int64)v31, (__int64)v27);
      BugCheckParameter3_4 = v28;
      v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      v28,
                      v27);
      if ( !v5 )
      {
        v6 = v24;
        v9 = 0;
LABEL_20:
        if ( v30 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
        goto LABEL_22;
      }
    }
    CmpFindSubKeyInLeafWithStatus(
      BugCheckParameter2,
      (_DWORD)v5,
      (unsigned int)&DestinationString,
      (unsigned int)&v28,
      (__int64)&v33);
    v13 = (unsigned int)v33;
    if ( v33 >= 0 )
    {
      v14 = v5[1]-- == 1;
      v15 = v5[1];
      if ( !v14 )
      {
        if ( (unsigned int)v13 >= v15 )
        {
LABEL_14:
          v20 = BugCheckParameter3;
LABEL_15:
          v6 = v24;
          *v34 = v20;
          goto LABEL_16;
        }
        v16 = v15 - (_DWORD)v13;
        if ( *v5 == 26988 )
        {
          v17 = 4LL * v16;
          v18 = &v5[2 * (unsigned int)(v13 + 1) + 2];
          v19 = &v5[2 * v13 + 2];
        }
        else
        {
          v17 = 8LL * v16;
          v18 = &v5[4 * (unsigned int)(v13 + 1) + 2];
          v19 = &v5[4 * v13 + 2];
        }
LABEL_13:
        memmove(v19, v18, v17);
        goto LABEL_14;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
      v5 = 0LL;
      HvFreeCell(BugCheckParameter2, BugCheckParameter3_4);
      v22 = v30;
      if ( v30 )
      {
        v14 = v30[1]-- == 1;
        v23 = v22[1];
        if ( !v14 )
        {
          if ( SubKeyInRoot >= (unsigned int)v23 )
            goto LABEL_14;
          v17 = 4LL * ((unsigned int)v23 - SubKeyInRoot);
          v18 = &v22[2 * (SubKeyInRoot + 1) + 2];
          v19 = &v22[2 * SubKeyInRoot + 2];
          goto LABEL_13;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
        v30 = 0LL;
        HvFreeCell(BugCheckParameter2, BugCheckParameter3);
      }
      v20 = -1;
      goto LABEL_15;
    }
LABEL_37:
    v6 = v24;
    v9 = 0;
LABEL_18:
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
    goto LABEL_20;
  }
  v6 = v24;
  v9 = 0;
LABEL_22:
  if ( v6 && Buffer && v10 > 0x64u )
    ExFreePoolWithTag(Buffer, 0);
  return v9;
}
