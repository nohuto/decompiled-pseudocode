/*
 * XREFs of ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C00DB270
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

char __fastcall CForegroundInfo::HasForeground(CForegroundInfo *this, const struct CInputDest *a2)
{
  return CInputDest::operator==((int *)this, (__int64)a2);
}
