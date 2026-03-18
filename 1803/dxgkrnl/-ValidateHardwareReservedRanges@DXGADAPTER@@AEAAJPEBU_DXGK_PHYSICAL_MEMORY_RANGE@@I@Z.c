/*
 * XREFs of ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0150230
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::ValidateHardwareReservedRanges(
        DXGADAPTER *this,
        const struct _DXGK_PHYSICAL_MEMORY_RANGE *a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rsi
  __int64 v8; // rax
  __int64 v10; // rcx
  LARGE_INTEGER BaseAddress; // rdi
  LARGE_INTEGER NumberOfBytes; // r15
  LARGE_INTEGER v13; // rbp
  LARGE_INTEGER v14; // rax
  int v15; // r8d
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  LARGE_INTEGER v17; // r15
  LARGE_INTEGER v18; // r13
  _QWORD *v19; // rax

  v5 = 0;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  if ( PhysicalMemoryRanges )
  {
    v10 = 0LL;
    if ( a3 )
    {
      while ( 1 )
      {
        BaseAddress = a2->BaseAddress;
        NumberOfBytes = a2->NumberOfBytes;
        v13.QuadPart = NumberOfBytes.QuadPart + a2->BaseAddress.QuadPart;
        if ( v13.QuadPart < (unsigned __int64)a2->BaseAddress.QuadPart )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v10);
          v19[4] = NumberOfBytes.QuadPart;
          goto LABEL_14;
        }
        v14 = PhysicalMemoryRanges->NumberOfBytes;
        v15 = 0;
        if ( v14.QuadPart )
          break;
LABEL_10:
        v10 = (unsigned int)(v10 + 1);
        ++a2;
        if ( (unsigned int)v10 >= a3 )
          goto LABEL_15;
      }
      p_BaseAddress = &PhysicalMemoryRanges->BaseAddress;
      while ( 1 )
      {
        v17 = *p_BaseAddress;
        v18.QuadPart = v14.QuadPart + p_BaseAddress->QuadPart;
        if ( BaseAddress.QuadPart < (unsigned __int64)v18.QuadPart && v13.QuadPart > (unsigned __int64)v17.QuadPart )
          break;
        p_BaseAddress = &PhysicalMemoryRanges[++v15].BaseAddress;
        v14 = p_BaseAddress[1];
        if ( !v14.QuadPart )
          goto LABEL_10;
      }
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v19[4] = v13.QuadPart;
      v19[5] = v17.QuadPart;
      v19[6] = v18.QuadPart;
LABEL_14:
      v19[3] = BaseAddress.QuadPart;
      WdLogEvent5_WdError(v19);
      v5 = -1073741811;
    }
LABEL_15:
    ExFreePoolWithTag(PhysicalMemoryRanges, 0);
    return v5;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v8 + 24) = 9192LL;
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
}
