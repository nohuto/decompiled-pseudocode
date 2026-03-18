/*
 * XREFs of RtlpOpenImageFileOptionsKey @ 0x140443B68
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     SepIsImageInMinTcbList @ 0x1404F70A4 (SepIsImageInMinTcbList.c)
 * Callees:
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140443C40 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140443CEC (RtlpProcessIFEOKeyFilter.c)
 */

NTSTATUS __fastcall RtlpOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  int v6; // edx
  __int64 v7; // rax
  int v8; // ecx
  bool v9; // zf
  ULONG v10; // eax
  __int64 v11; // rdx
  __int16 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *v15; // [rsp+88h] [rbp+20h] BYREF

  result = RtlpOpenBaseImageFileOptionsKey(&v15);
  if ( result >= 0 )
  {
    v6 = *a1;
    v7 = *((_QWORD *)a1 + 1) + *a1;
    if ( *a1 )
    {
      do
      {
        if ( *(_WORD *)(v7 - 2) == 92 )
          break;
        v7 -= 2LL;
        v6 -= 2;
      }
      while ( v6 );
    }
    v8 = *a1 - v6;
    v13 = v7;
    v12 = v8;
    if ( (unsigned __int16)v8 == v8 )
    {
      v9 = KeGetCurrentThread()->PreviousMode == 1;
      ObjectAttributes.RootDirectory = v15;
      v10 = 1600;
      ObjectAttributes.Length = 48;
      if ( !v9 )
        v10 = 576;
      ObjectAttributes.Attributes = v10;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenKey(a3, 9u, &ObjectAttributes);
      if ( result >= 0 )
        return RtlpProcessIFEOKeyFilter(a3, v11, a1);
    }
    else
    {
      return -1073741789;
    }
  }
  return result;
}
