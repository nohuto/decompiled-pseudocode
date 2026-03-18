/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x14057E328
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     SepIsMinTCB @ 0x14053AAD0 (SepIsMinTCB.c)
 *     SepIsImageInMinTcbList @ 0x140580228 (SepIsImageInMinTcbList.c)
 *     RtlOpenImageFileOptionsKey @ 0x14071E390 (RtlOpenImageFileOptionsKey.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x14057E428 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14057E480 (RtlpProcessIFEOKeyFilter.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  unsigned int v5; // edx
  __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned int v9; // edx
  __int64 result; // rax
  bool v11; // zf
  ULONG v12; // eax
  __int64 v13; // rdx
  NTSTATUS v14; // ebx
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  __int16 v16; // [rsp+28h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF
  void *v20; // [rsp+A8h] [rbp+38h] BYREF

  *a4 = 0LL;
  v5 = *a1;
  v20 = 0LL;
  v7 = *((_QWORD *)a1 + 1) + v5;
  v8 = v5;
  for ( KeyHandle = 0LL; v8; v8 -= 2 )
  {
    if ( *(_WORD *)(v7 - 2) == 92 )
      break;
    v7 -= 2LL;
  }
  v9 = v5 - v8;
  v17 = v7;
  v16 = v9;
  if ( (unsigned __int16)v9 != v9 )
    return 3221225507LL;
  result = RtlpOpenBaseImageFileOptionsKey(&v20);
  if ( (int)result >= 0 )
  {
    v11 = KeGetCurrentThread()->PreviousMode == 1;
    ObjectAttributes.RootDirectory = v20;
    v12 = 1600;
    ObjectAttributes.Length = 48;
    if ( !v11 )
      v12 = 576;
    ObjectAttributes.Attributes = v12;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v14 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( v14 >= 0 )
    {
      Handle = KeyHandle;
      v14 = RtlpProcessIFEOKeyFilter(&Handle, v13, a1);
      if ( v14 < 0 )
      {
        if ( Handle )
          ZwClose(Handle);
      }
      else
      {
        *a4 = Handle;
      }
    }
    return (unsigned int)v14;
  }
  return result;
}
