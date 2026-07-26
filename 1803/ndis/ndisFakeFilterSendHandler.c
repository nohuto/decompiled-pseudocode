/*
 * XREFs of ndisFakeFilterSendHandler @ 0x1C005A210
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextSendCompleteHandler @ 0x1C005A7D4 (ndisInvokeNextSendCompleteHandler.c)
 */

__int64 __fastcall ndisFakeFilterSendHandler(__int64 a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *i; // r8
  __int64 v3; // r8
  void *v4; // rax
  void (*v5)(void); // rcx
  __int64 v6; // r8

  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = *(_DWORD *)(a1 + 96);
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 )
  {
    v4 = *(void **)(v3 + 480);
    v5 = *(void (**)(void))(v3 + 472);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 32);
    v4 = *(void **)(v6 + 2584);
    v5 = *(void (**)(void))(v6 + 2624);
  }
  return ndisInvokeNextSendCompleteHandler(a2, v4, v5);
}
