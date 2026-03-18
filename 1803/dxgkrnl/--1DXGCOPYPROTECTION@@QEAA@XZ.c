/*
 * XREFs of ??1DXGCOPYPROTECTION@@QEAA@XZ @ 0x1C01878B0
 * Callers:
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0027D38 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCOPYPROTECTION::~DXGCOPYPROTECTION(DXGCOPYPROTECTION *this, __int64 a2)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
  v3[3] = this;
  v3[4] = *((unsigned int *)this + 12);
  v3[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v3);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
