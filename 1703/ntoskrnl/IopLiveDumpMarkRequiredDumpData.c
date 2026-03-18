/*
 * XREFs of IopLiveDumpMarkRequiredDumpData @ 0x140416BA4
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1404163C0 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmAddRangeToCrashDump @ 0x1402130DC (MmAddRangeToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140416884 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1404169D0 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x140416A90 (IopLiveDumpMarkProcessorData.c)
 *     MmAddPrivateDataToCrashDump @ 0x140419828 (MmAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkRequiredDumpData(__int64 a1, __int64 (__fastcall *a2)(_QWORD, __int64, __int64))
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v8; // [rsp+30h] [rbp-40h]
  __int64 (__fastcall *v9[7])(_QWORD, __int64, __int64); // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+80h] [rbp+10h] BYREF

  memset(&v9[1], 0, 0x28uLL);
  LODWORD(v9[5]) |= 1u;
  v9[2] = (__int64 (__fastcall *)(_QWORD, __int64, __int64))(a1 + 368);
  v9[4] = a2;
  v9[0] = (__int64 (__fastcall *)(_QWORD, __int64, __int64))IoSetDumpRange;
  v9[1] = 0LL;
  result = MmAddRangeToCrashDump(v9, (unsigned __int64)&KdDebuggerDataBlock, 872LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(v9, (unsigned __int64)KiProcessorBlock, 8LL * (unsigned int)KeNumberProcessors_0);
    if ( (int)result >= 0 )
    {
      result = IopLiveDumpMarkLoadedModuleList(v9);
      if ( (int)result >= 0 )
      {
        v7[1] = (unsigned __int16 *)qword_1403E42B8[0];
        v7[0] = (unsigned __int16 *)KeActiveProcessors;
        v8 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v7) )
        {
          result = IopLiveDumpMarkProcessorData(v9, v10);
          if ( (int)result < 0 )
            return result;
        }
        result = MmAddPrivateDataToCrashDump(v9, 2LL);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(v9, 0xFFFFF78000000000uLL, 1800LL);
          if ( (int)result >= 0 )
          {
            result = MmAddPrivateDataToCrashDump(v9, 4LL);
            if ( (int)result >= 0 )
            {
              result = MmAddPrivateDataToCrashDump(v9, 8LL);
              if ( (int)result >= 0 && *(_DWORD *)a1 == 351 && *(_QWORD *)(a1 + 8) == 2LL )
              {
                v5 = *(_QWORD *)(a1 + 16);
                result = MmAddRangeToCrashDump(v9, v5, 56LL);
                if ( (int)result >= 0 )
                {
                  result = IopLiveDumpMarkDeviceNode(v9, *(_QWORD *)(v5 + 48));
                  if ( (int)result >= 0 )
                  {
                    v6 = *(_QWORD *)(a1 + 32);
                    if ( v6 )
                      return IopLiveDumpMarkDeviceNode(v9, v6);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
