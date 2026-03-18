/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x1401E35BC
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x1400AF93C (RtlUnicodeStringCopy.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpIsValueTombstone @ 0x140471F84 (CmpIsValueTombstone.c)
 *     CmpGetKeyNodeForKcb @ 0x140472A4C (CmpGetKeyNodeForKcb.c)
 *     CmpFindNameInListWithStatus @ 0x140479488 (CmpFindNameInListWithStatus.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCleanupKcbStack @ 0x1404834BC (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140483BC0 (CmpInitializeKcbStack.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1405EB4B0 (CmpReleaseKeyNodeForKcb.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140697F00 (CmpGetEffectiveKcbSemantics.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        char a7)
{
  bool v8; // si
  char v9; // r12
  __int64 v10; // r14
  __int64 v11; // r13
  int started; // edi
  __int64 v13; // rax
  unsigned int v14; // r14d
  UNICODE_STRING *v15; // rax
  int v16; // edi
  unsigned __int16 i; // dx
  __int16 j; // r14
  __int64 KcbAtLayerHeight; // r15
  __int64 v20; // rcx
  int KeyNodeForKcb; // eax
  int v22; // r15d
  int v23; // ecx
  unsigned int v24; // edi
  unsigned int v25; // edx
  unsigned int v26; // r15d
  __int64 v27; // rcx
  _BYTE v29[4]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-E4h]
  unsigned int v31; // [rsp+48h] [rbp-E0h]
  unsigned int Size; // [rsp+4Ch] [rbp-DCh] BYREF
  NTSTATUS Size_4; // [rsp+50h] [rbp-D8h]
  void *Src; // [rsp+58h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-C8h] BYREF
  int v36; // [rsp+70h] [rbp-B8h]
  __int64 v37; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+90h] [rbp-98h] BYREF
  __int64 v41; // [rsp+98h] [rbp-90h]
  __int64 v42; // [rsp+A0h] [rbp-88h]
  __int64 v43; // [rsp+A8h] [rbp-80h]
  UNICODE_STRING v44; // [rsp+B0h] [rbp-78h]
  _BYTE v45[32]; // [rsp+C0h] [rbp-68h] BYREF
  UNICODE_STRING SourceString; // [rsp+E0h] [rbp-48h] BYREF
  char v47; // [rsp+130h] [rbp+8h]

  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = 0;
  CmpInitializeKcbStack(v45);
  v9 = 0;
  v10 = 0LL;
  v38 = 0xFFFFFFFFLL;
  v40 = 0xFFFFFFFFLL;
  v11 = 0LL;
  v41 = 0LL;
  Src = 0LL;
  v29[0] = 0;
  v37 = 0xFFFFFFFFLL;
  v31 = 0;
  v30 = 0;
  v47 = 0;
  v43 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v45, v43);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared(v45);
    v9 = 1;
    v29[1] = 1;
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started >= 0 )
    {
      v8 = a7 != 0;
      v29[2] = a7 != 0;
      v29[3] = a7 != 0;
      v13 = 0LL;
      v14 = 0;
      while ( 1 )
      {
        v36 = v13;
        if ( (unsigned int)v13 >= a3 )
          break;
        if ( a7 )
        {
          v42 = a2 + 24 * v13;
          v15 = *(UNICODE_STRING **)v42;
          if ( *(_QWORD *)v42 >= 0x7FFFFFFF0000uLL )
            v15 = (UNICODE_STRING *)0x7FFFFFFF0000LL;
          v16 = *(_DWORD *)&v15->Length;
          *(_DWORD *)&v44.Length = v16;
          v44.Buffer = v15->Buffer;
          SourceString = v44;
          if ( (v16 & 1) != 0 )
          {
            started = -1073741811;
            Size_4 = -1073741811;
            v10 = 0LL;
            goto LABEL_54;
          }
          if ( (unsigned __int16)v16 > DestinationString.MaximumLength )
          {
            if ( DestinationString.Buffer )
            {
              ExFreePoolWithTag(DestinationString.Buffer, 0);
              RtlInitUnicodeString(&DestinationString, 0LL);
            }
            DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v16, 0x20204D43u);
            if ( !DestinationString.Buffer )
            {
              started = -1073741670;
              Size_4 = -1073741670;
              v10 = 0LL;
              goto LABEL_54;
            }
            DestinationString.Length = 0;
            DestinationString.MaximumLength = v16;
          }
          Size_4 = RtlUnicodeStringCopy(&DestinationString, &SourceString);
        }
        else
        {
          v42 = a2 + 24 * v13;
          DestinationString = *(UNICODE_STRING *)*(_QWORD *)v42;
        }
        for ( i = DestinationString.Length;
              i && !DestinationString.Buffer[((unsigned __int64)i - 1) >> 1];
              DestinationString.Length = i )
        {
          i -= 2;
        }
        LODWORD(v39) = -1;
        for ( j = *(_WORD *)(v43 + 58); j >= 0; --j )
        {
          KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v45, (unsigned __int16)j);
          if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) == 1 )
            break;
          if ( *(_DWORD *)(v20 + 32) != -1 )
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v20, &v40, 0LL);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        KeyNodeForKcb + 36,
                        (unsigned int)&DestinationString,
                        0,
                        0LL,
                        (__int64)&v39);
            CmpReleaseKeyNodeForKcb(KcbAtLayerHeight, &v40);
            if ( started >= 0 )
            {
              v11 = KcbAtLayerHeight;
              v41 = KcbAtLayerHeight;
              break;
            }
            if ( started != -1073741772 )
              goto LABEL_53;
            if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) )
              break;
          }
        }
        v22 = v39;
        if ( (_DWORD)v39 == -1 )
        {
          started = -1073741772;
          goto LABEL_53;
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v11 + 24) + 8LL))(
                *(_QWORD *)(v11 + 24),
                (unsigned int)v39,
                &v38);
        v39 = v10;
        if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(v11 + 24), v10) )
        {
          started = -1073741772;
          goto LABEL_54;
        }
        v24 = *(_DWORD *)(v10 + 4);
        if ( v24 >= 0x80000000 )
          v24 += 0x80000000;
        Size = v24;
        v25 = (v31 + 7) & 0xFFFFFFF8;
        v31 = v25;
        v30 = (v30 + 7) & 0xFFFFFFF8;
        if ( v47 || v24 + v25 > *a5 || v24 + v25 < v25 )
        {
          v47 = 1;
        }
        else
        {
          if ( !(unsigned __int8)CmpGetValueData(
                                   v23,
                                   v22,
                                   v10,
                                   (unsigned int)&Size,
                                   (__int64)&Src,
                                   (__int64)v29,
                                   (__int64)&v37) )
          {
            started = -1073741670;
            goto LABEL_54;
          }
          v24 = Size;
          v26 = v31;
          memmove((void *)(a4 + v31), Src, Size);
          v27 = v42;
          *(_DWORD *)(v42 + 16) = *(_DWORD *)(v10 + 12);
          *(_DWORD *)(v27 + 8) = v24;
          *(_DWORD *)(v27 + 12) = v26;
          v31 = v24 + v26;
          if ( v29[0] )
            ExFreePoolWithTag(Src, 0);
          else
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v11 + 24) + 16LL))(*(_QWORD *)(v11 + 24), &v37);
          Src = 0LL;
        }
        v14 = v24 + v30;
        v30 += v24;
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v11 + 24) + 16LL))(*(_QWORD *)(v11 + 24), &v38);
        v13 = (unsigned int)(v36 + 1);
      }
      *a5 = v31;
      if ( a6 )
        *a6 = v14;
      started = -2147483643;
      if ( !v47 )
        started = 0;
LABEL_53:
      v10 = 0LL;
    }
  }
LABEL_54:
  if ( Src )
  {
    if ( v29[0] )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v11 + 24) + 16LL))(*(_QWORD *)(v11 + 24), &v37);
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v11 + 24) + 16LL))(*(_QWORD *)(v11 + 24), &v38);
  if ( v9 )
    CmpUnlockKcbStack(v45);
  CmpCleanupKcbStack(v45);
  if ( v8 && DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)started;
}
