/*
 * XREFs of IopFreeCompletionListPackets @ 0x140429154
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x140011200 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IopDropIrp @ 0x140011708 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140011888 (IopFreeWaitCompletionPacket.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x140527A70 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(_QWORD *P, void *a2)
{
  _QWORD *v3; // rbx
  _BYTE *v4; // rcx
  char v5; // al
  _BYTE *v6; // rcx

  if ( P )
  {
    v3 = P;
    do
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      v5 = v4[16];
      if ( v5 )
      {
        if ( v5 == 2 )
          IopFreeWaitCompletionPacket((__int64)v4, a2);
        else
          IopFreeMiniCompletionPacket(v4);
      }
      else
      {
        v6 = v4 - 168;
        if ( (*((_DWORD *)v6 + 4) & 0x2000) != 0 )
          IopDropIrp((PIRP)v6, *((_QWORD *)v6 + 24));
        else
          IoFreeIrp((PIRP)v6);
      }
    }
    while ( v3 );
  }
}
