/*
 * XREFs of KiFlushSingleTbWorker @ 0x140207170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

struct _KTHREAD *__fastcall KiFlushSingleTbWorker(__int64 a1)
{
  struct _KTHREAD *result; // rax
  __int128 v3; // [rsp+0h] [rbp-28h]

  result = (struct _KTHREAD *)(unsigned int)(1 << *(_DWORD *)(a1 + 8));
  if ( ((unsigned __int8)result & 0xA) != 0 )
  {
    _R8D = 0;
    if ( KiFlushPcid )
    {
      result = KeGetCurrentThread();
      if ( !result->ApcState.Process->AddressPolicy )
      {
        *(_QWORD *)&v3 = 1LL;
        *((_QWORD *)&v3 + 1) = *(_QWORD *)a1;
        __asm { invpcid r8d, [rsp+28h+var_28] }
      }
    }
  }
  __invlpg(*(void **)a1);
  return result;
}
