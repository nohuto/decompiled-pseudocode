/*
 * XREFs of HwpInterruptService @ 0x1C0006D70
 * Callers:
 *     <none>
 * Callees:
 *     CpcNativeInterruptOccurred @ 0x1C0008000 (CpcNativeInterruptOccurred.c)
 */

char __fastcall HwpInterruptService(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r10
  unsigned __int64 v4; // rax
  char v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // [rsp+40h] [rbp+18h]

  v4 = __readmsr(0x777u);
  v3 = v4;
  LODWORD(v4) = v4 & 0xFFFFFFFE;
  v5 = v3 & 1;
  v8 = v4;
  if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
    a3 = (unsigned int)v4 >> 3;
    LOBYTE(a3) = (v4 & 8) != 0;
    LODWORD(v8) = v4 & 0xFFFFFFF7;
  }
  else
  {
    LOBYTE(a3) = 0;
  }
  v6 = HIDWORD(v8);
  __writemsr(0x777u, v8);
  if ( v5 || (_BYTE)a3 )
  {
    LOBYTE(v6) = v5;
    CpcNativeInterruptOccurred(*((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + KeGetPcr()->Prcb.Number), v6, a3);
  }
  return 1;
}
