/*
 * XREFs of IoGetInitiatorProcess @ 0x14003B5E0
 * Callers:
 *     IopCheckInitiatorHint @ 0x14001E214 (IopCheckInitiatorHint.c)
 *     IoIsInitiator32bitProcess @ 0x14003B5A0 (IoIsInitiator32bitProcess.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1)
{
  __int64 FileObjectExtension; // rax

  if ( *(_QWORD *)(a1 + 208) && (FileObjectExtension = IopGetFileObjectExtension(a1, 1LL)) != 0 )
    return *(_QWORD *)(FileObjectExtension + 8);
  else
    return 0LL;
}
