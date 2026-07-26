/*
 * XREFs of ?NdisPDFetchPostedItems@@YAXPEAUPD_QUEUE_HANDLE__@@PEAPEAPEAU_SINGLE_LIST_ENTRY@@KPEAE@Z @ 0x1C0076530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisPDFetchPostedItems(
        struct PD_QUEUE_HANDLE__ *a1,
        struct _SINGLE_LIST_ENTRY ***a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  struct _SINGLE_LIST_ENTRY **p_Next; // rbx
  unsigned int v6; // r11d
  int v7; // edi
  __int64 v8; // rax
  struct _SINGLE_LIST_ENTRY *v9; // rcx
  bool v10; // zf
  struct _SINGLE_LIST_ENTRY *v11; // [rsp+8h] [rbp+8h] BYREF

  v11 = 0LL;
  p_Next = &v11;
  v6 = *((_DWORD *)a1 + 34);
  v7 = *((_DWORD *)a1 + 13);
  if ( (v7 & (*((_DWORD *)a1 + 16) - v6)) < a3 )
    a3 = v7 & (*((_DWORD *)a1 + 16) - v6);
  for ( ; a3; --a3 )
  {
    v8 = v6;
    v6 = v7 & (v6 + 1);
    v9 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + v8 + 24);
    *p_Next = v9;
    p_Next = &v9->Next;
  }
  if ( *((_BYTE *)a1 + 24) )
  {
    *((_DWORD *)a1 + 15) = v6;
    *((_DWORD *)a1 + 33) = v6;
  }
  v10 = v11 == 0LL;
  *((_DWORD *)a1 + 34) = v6;
  if ( !v10 )
  {
    *p_Next = 0LL;
    **a2 = v11;
    *a2 = p_Next;
  }
  *a4 = *((_BYTE *)a1 + 48);
}
