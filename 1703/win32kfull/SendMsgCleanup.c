/*
 * XREFs of SendMsgCleanup @ 0x1C00C6700
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00C7A50 (xxxRestoreCsrssThreadDesktop.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C00C675C (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C01198C8 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 */

struct tagSMS *__fastcall SendMsgCleanup(__int64 a1)
{
  struct tagSMS *result; // rax
  struct tagSMS *v3; // rbx
  struct tagSMS *v4; // rcx

  result = (struct tagSMS *)gsmsList;
  v3 = (struct tagSMS *)gsmsList;
  while ( v3 != result )
  {
    v4 = v3;
    v3 = *(struct tagSMS **)v3;
    if ( *((_QWORD *)v4 + 4) == a1 || *((_QWORD *)v4 + 8) == a1 )
    {
      SenderDied(v4);
LABEL_2:
      result = (struct tagSMS *)gsmsList;
    }
    else if ( *((_QWORD *)v4 + 5) == a1 )
    {
      xxxReceiverDied();
      goto LABEL_2;
    }
  }
  return result;
}
