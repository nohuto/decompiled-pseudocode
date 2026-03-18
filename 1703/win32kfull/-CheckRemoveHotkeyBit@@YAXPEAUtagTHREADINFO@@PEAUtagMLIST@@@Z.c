/*
 * XREFs of ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C011995C
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00527D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     FindQMsg @ 0x1C0052B70 (FindQMsg.c)
 * Callees:
 *     <none>
 */

void __fastcall CheckRemoveHotkeyBit(struct tagTHREADINFO *a1, struct tagMLIST *a2)
{
  _QWORD *v2; // r9
  unsigned int v3; // r8d
  int *v4; // rax
  int v5; // edx
  unsigned int v6; // eax

  v2 = *(_QWORD **)a2;
  v3 = 0;
  if ( !*(_QWORD *)a2 )
    goto LABEL_6;
  do
  {
    v4 = (int *)(v2 + 3);
    v2 = (_QWORD *)*v2;
    v5 = *v4;
    v6 = v3 + 1;
    if ( v5 != 786 )
      v6 = v3;
    v3 = v6;
  }
  while ( v2 );
  if ( v6 <= 1 )
  {
LABEL_6:
    *(_WORD *)(*((_QWORD *)a1 + 50) + 6LL) &= ~0x80u;
    *(_WORD *)(*((_QWORD *)a1 + 50) + 4LL) &= ~0x80u;
  }
}
