/*
 * XREFs of IoGetInitiatorProcess @ 0x140131770
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x14000F420 (IoIsInitiator32bitProcess.c)
 *     IopCheckInitiatorHint @ 0x140062424 (IopCheckInitiatorHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1)
{
  __int64 FileObjectExtension; // rax

  if ( *(_QWORD *)(a1 + 208) && (FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL)) != 0 )
    return *(_QWORD *)(FileObjectExtension + 8);
  else
    return 0LL;
}
