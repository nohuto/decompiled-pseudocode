/*
 * XREFs of ?ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z @ 0x1C0152DA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDxgkConfirmToken @ 0x1C00F35F0 (GreDxgkConfirmToken.c)
 */

void __fastcall CFlipExBuffer::ConfirmIndependentFlipEntry(
        CFlipExBuffer *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  _QWORD *v10; // rax
  __int64 v11; // [rsp+50h] [rbp+8h]

  if ( *((_DWORD *)this + 87) == 1 && *((_QWORD *)this + 59) == a6 )
  {
    v11 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 87) = 2;
    v10 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v10[3] = a3;
    v10[4] = v11;
    v10[5] = *((_QWORD *)this + 2);
    v10[6] = a5;
    v10[7] = a6;
    WdLogEvent5_WdPresentTokenEvent(v10);
    GreDxgkConfirmToken(a2, a4);
  }
}
