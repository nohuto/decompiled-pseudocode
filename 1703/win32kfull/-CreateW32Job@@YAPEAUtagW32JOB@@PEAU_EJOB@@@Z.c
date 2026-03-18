/*
 * XREFs of ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C00171FC
 * Callers:
 *     UserJobCallout @ 0x1C001A230 (UserJobCallout.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
struct tagW32JOB *__fastcall CreateW32Job(struct _EJOB *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct tagW32JOB *result; // rax

  v2 = Win32AllocPoolZInit(64LL, 1651143509LL);
  v3 = v2;
  if ( v2 )
  {
    if ( (int)CreateGlobalAtomTable(v2 + 16) >= 0 )
    {
      *(_QWORD *)v3 = gpJobsList;
      gpJobsList = v3;
      result = (struct tagW32JOB *)v3;
      *(_QWORD *)(v3 + 8) = a1;
      return result;
    }
    Win32FreePool(v3);
  }
  return 0LL;
}
