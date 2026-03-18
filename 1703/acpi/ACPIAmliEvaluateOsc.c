/*
 * XREFs of ACPIAmliEvaluateOsc @ 0x1C008A750
 * Callers:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x1C000617C (AcpiEvaluateOscMethodOnPciRootBus.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C008A538 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C008A69C (ACPIEvaluateOscWheaMethodOnRootBus.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001DB68 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIAmliEvaluateOsc(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 *v7; // rbp
  PVOID PoolWithTag; // rsi
  unsigned int *v9; // rdi
  unsigned int v10; // r15d
  int v11; // ebx
  size_t v12; // r8
  const void *v13; // rdx

  v6 = a4;
  v7 = AMLIGetNamedChild(a1, 1129533279);
  if ( v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x41706341u);
    if ( PoolWithTag )
    {
      v9 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
      if ( v9 )
      {
        memset(PoolWithTag, 0, 0xA0uLL);
        memset(v9, 0, 0x28uLL);
        *((_QWORD *)PoolWithTag + 4) = a2;
        *((_WORD *)PoolWithTag + 1) = 3;
        *((_WORD *)PoolWithTag + 61) = 3;
        *((_DWORD *)PoolWithTag + 6) = 16;
        v10 = v6;
        *((_QWORD *)PoolWithTag + 12) = v6;
        *((_WORD *)PoolWithTag + 21) = 1;
        *((_QWORD *)PoolWithTag + 7) = 1LL;
        *((_WORD *)PoolWithTag + 41) = 1;
        *((_DWORD *)PoolWithTag + 36) = 4 * v6;
        *((_QWORD *)PoolWithTag + 19) = a5;
        v11 = AMLIEvalNameSpaceObject(v7, v9, 4u, PoolWithTag);
        if ( v11 >= 0 )
        {
          if ( *((_WORD *)v9 + 1) == 3
            && (v12 = v9[6], v12 >= 4 * (unsigned __int64)v10)
            && (v13 = (const void *)*((_QWORD *)v9 + 4)) != 0LL
            && (memmove(a5, v13, v12), (*a5 & 0xE) == 0) )
          {
            AMLIFreeDataBuffs((__int64)v9);
            v11 = 0;
          }
          else
          {
            v11 = -1073741823;
          }
        }
      }
      else
      {
        v11 = -1073741670;
      }
      ExFreePoolWithTag(PoolWithTag, 0x41706341u);
      if ( v9 )
        ExFreePoolWithTag(v9, 0x52706341u);
    }
    else
    {
      v11 = -1073741670;
    }
    AMLIDereferenceHandleEx((volatile signed __int32 *)v7, 0LL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v11;
}
