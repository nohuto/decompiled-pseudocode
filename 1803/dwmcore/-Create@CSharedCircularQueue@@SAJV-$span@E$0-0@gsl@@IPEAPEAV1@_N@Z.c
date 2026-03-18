/*
 * XREFs of ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x18018EE70
 * Callers:
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18018F548 (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSharedCircularQueue::Create(unsigned int *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  _DWORD *v9; // rcx
  int v10; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = a2;
  if ( (a1[2] & 3) != 0 || a2 - 1 > 0xFF || (v7 = *a1, v7 < (unsigned __int64)(unsigned int)(2 * v4) + 8) )
  {
    v10 = -2147024809;
    v12 = 54;
    goto LABEL_10;
  }
  v8 = (v7 - 8) / v4;
  v9 = HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  if ( v9 )
  {
    *(_QWORD *)v9 = *((_QWORD *)a1 + 1);
    v9[2] = v4;
    v9[3] = v8;
  }
  else
  {
    v9 = 0LL;
  }
  *a3 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    v12 = 60;
LABEL_10:
    v3 = v10;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v12);
  }
  return v3;
}
