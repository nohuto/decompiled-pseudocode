/*
 * XREFs of sub_180080418 @ 0x180080418
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     RtlAssert @ 0x1800E6440 (RtlAssert.c)
 */

__int64 __fastcall sub_180080418(_BYTE *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v7; // rax
  const char *v8; // r9
  __int64 v9; // r8
  wchar_t **v10; // rsi
  wchar_t *v11; // rcx
  _WORD *v12; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !a1 )
  {
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 524LL, "This != NULL");
    return (unsigned int)-1073741595;
  }
  if ( !a1[80] )
    goto LABEL_8;
  v3 = *((_QWORD *)a1 + 8);
  if ( v3 && *(_QWORD *)(v3 + 8) )
  {
    v8 = "(This->PrivateDynamicallyAllocatedString == NULL) || (This->PrivateDynamicallyAllocatedString->Buffer == NULL)";
    v9 = 532LL;
    goto LABEL_19;
  }
  v4 = *((_QWORD *)a1 + 7);
  if ( v4 && *(_QWORD *)(v4 + 8) == *((_QWORD *)a1 + 1) )
  {
    if ( *(_WORD *)a1 <= *(_WORD *)(v4 + 2) )
    {
      *(_WORD *)v4 = *(_WORD *)a1;
      v5 = (_QWORD *)*((_QWORD *)a1 + 9);
      if ( v5 )
      {
        v7 = *((_QWORD *)a1 + 7);
LABEL_14:
        *v5 = v7;
        goto LABEL_8;
      }
      goto LABEL_8;
    }
    v8 = "rUS.Length <= This->PrivatePreallocatedString->MaximumLength";
    v9 = 537LL;
LABEL_19:
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", v9, v8);
    v1 = -1073741595;
    goto LABEL_8;
  }
  if ( !v3 )
  {
    v10 = (wchar_t **)(a1 + 16);
    if ( a1 != (_BYTE *)-16LL && *v10 )
    {
      v11 = (wchar_t *)*((_QWORD *)a1 + 3);
      if ( *v10 != v11 )
      {
        UnicodeString.Buffer = *v10;
        RtlFreeUnicodeString(&UnicodeString);
        v11 = (wchar_t *)*((_QWORD *)a1 + 3);
      }
      *((_QWORD *)a1 + 4) = *((_QWORD *)a1 + 5);
      *v10 = v11;
    }
    v12 = (_WORD *)*((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 1) = v12;
    if ( v12 )
      *v12 = 0;
    *((_WORD *)a1 + 1) = *((_WORD *)a1 + 20);
    *(_WORD *)a1 = 0;
    goto LABEL_8;
  }
  *(_OWORD *)v3 = *(_OWORD *)a1;
  v5 = (_QWORD *)*((_QWORD *)a1 + 9);
  if ( v5 )
  {
    v7 = *((_QWORD *)a1 + 8);
    goto LABEL_14;
  }
LABEL_8:
  memset(a1, 0, 0x58uLL);
  return v1;
}
