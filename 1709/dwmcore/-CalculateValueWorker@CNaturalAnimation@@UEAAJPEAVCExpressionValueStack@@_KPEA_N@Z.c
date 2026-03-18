/*
 * XREFs of ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180172BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800BA1F8 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801728A0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x180173F38 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801745E4 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CNaturalAnimation::CalculateValueWorker(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // edi
  int v9; // eax
  TimeDelta *v10; // r10
  int v11; // r9d
  bool v12; // r8
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+28h] [rbp-20h]

  v4 = 0;
  *a4 = 1;
  CNaturalAnimation::SetupAnimationIfNecessary(this);
  v9 = TimeDelta::ToMilliseconds((CNaturalAnimation *)((char *)this + 360));
  v11 = *((_DWORD *)this + 88);
  v12 = v9 >= v11;
  if ( v9 < v11 )
  {
    *(_QWORD *)v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL) - *((_QWORD *)this + 42) - Time::s_luBegin.QuadPart;
    v13 = TimeDelta::ToMilliseconds(v10);
    if ( v13 >= v14 )
      v12 = 1;
  }
  if ( v12 )
  {
    CNaturalAnimation::CalculateValue(this, a2, a3, a4);
  }
  else if ( *((_DWORD *)this + 87) == 1 )
  {
    v15 = *((_DWORD *)this + 70);
    v17 = *((_QWORD *)this + 34);
    v18 = v15;
    CNaturalAnimation::PushValueToStack(this, &v17, a2);
  }
  else
  {
    v4 = 1;
  }
  result = v4;
  *((_BYTE *)this + 524) ^= (*((_BYTE *)this + 524) ^ (*a4 << 6)) & 0x40;
  return result;
}
