/*
 * XREFs of sub_18005756C @ 0x18005756C
 * Callers:
 *     TpAllocIoCompletion @ 0x180057380 (TpAllocIoCompletion.c)
 *     sub_180108CB4 @ 0x180108CB4 (sub_180108CB4.c)
 *     sub_180109250 @ 0x180109250 (sub_180109250.c)
 * Callees:
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 *     ZwSetInformationFile @ 0x18009AFA0 (ZwSetInformationFile.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall sub_18005756C(__int64 a1, __int64 a2, struct _PEB_LDR_DATA *Ldr, __int64 a4)
{
  struct _PEB_LDR_DATA *v4; // rbx
  void *EntryInProgress; // rax
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF

  v4 = Ldr;
  if ( a1 && a2 && Ldr && (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
  {
    EntryInProgress = v4->EntryInProgress;
    v7[1] = a2;
    v7[0] = EntryInProgress;
    result = ZwSetInformationFile(a1, &v8, v7, 16LL, 30);
    if ( (int)result >= 0 )
    {
      sub_180058E68(v4, 1LL);
      return 0LL;
    }
  }
  else
  {
    sub_1801086C8(a1, a2, Ldr, a4);
    return 3221225485LL;
  }
  return result;
}
