/*
 * XREFs of ACPIAmliEvaluateOsc @ 0x1C0074918
 * Callers:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x1C0030858 (AcpiEvaluateOscMethodOnPciRootBus.c)
 *     ACPIPccLegacyInitialize @ 0x1C007EEB4 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C0086F98 (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 */

__int64 __fastcall ACPIAmliEvaluateOsc(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 *v7; // rbp
  int v8; // ebx
  PVOID PoolWithTag; // rsi
  unsigned int *v10; // rdi
  __int64 v11; // r15
  size_t v12; // r8
  const void *v13; // rdx

  v6 = a4;
  v7 = AMLIGetNamedChild(a1, 1129533279);
  if ( v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x41706341u);
    if ( PoolWithTag )
    {
      v10 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
      if ( v10 )
      {
        memset(PoolWithTag, 0, 0xA0uLL);
        memset(v10, 0, 0x28uLL);
        *((_QWORD *)PoolWithTag + 4) = a2;
        *((_WORD *)PoolWithTag + 1) = 3;
        *((_WORD *)PoolWithTag + 61) = 3;
        *((_DWORD *)PoolWithTag + 6) = 16;
        v11 = v6;
        *((_QWORD *)PoolWithTag + 12) = v6;
        *((_WORD *)PoolWithTag + 21) = 1;
        *((_QWORD *)PoolWithTag + 7) = 1LL;
        *((_WORD *)PoolWithTag + 41) = 1;
        *((_DWORD *)PoolWithTag + 36) = 4 * v6;
        *((_QWORD *)PoolWithTag + 19) = a5;
        v8 = AMLIEvalNameSpaceObject(v7, v10, 4u, PoolWithTag);
        if ( v8 >= 0 )
        {
          if ( *((_WORD *)v10 + 1) == 3
            && (v12 = v10[6], v12 >= 4 * v11)
            && (v13 = (const void *)*((_QWORD *)v10 + 4)) != 0LL
            && (memmove(a5, v13, v12), (*a5 & 0xE) == 0) )
          {
            AMLIFreeDataBuffs((__int64)v10);
            v8 = 0;
          }
          else
          {
            v8 = -1073741823;
          }
        }
      }
      else
      {
        v8 = -1073741670;
      }
      ExFreePoolWithTag(PoolWithTag, 0x41706341u);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x52706341u);
    }
    else
    {
      v8 = -1073741670;
    }
    AMLIDereferenceHandleEx((volatile signed __int32 *)v7);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
