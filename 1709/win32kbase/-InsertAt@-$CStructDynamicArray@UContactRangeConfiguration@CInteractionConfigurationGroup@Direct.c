/*
 * XREFs of ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C0022D88
 * Callers:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C0022328 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C0022678 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0022E38 (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  int v3; // ebx
  __int64 v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // r10

  v3 = 0;
  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 12)
    || (v3 = CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Grow(),
        v3 >= 0) )
  {
    if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
      v3 = -1073741823;
    if ( v3 >= 0 )
    {
      v8 = Win32AllocPoolZInit(0xCuLL);
      if ( !v8 )
        v3 = -1073741801;
      if ( v3 < 0 )
      {
        if ( v8 )
          Win32FreePool(v8, v7, v8);
      }
      else
      {
        *(_QWORD *)v8 = *(_QWORD *)a2;
        *(_DWORD *)(v8 + 8) = *(_DWORD *)(a2 + 8);
        v9 = *(unsigned int *)(a1 + 8);
        if ( (unsigned int)v9 > (unsigned int)v5 )
        {
          v11 = 8 * v9;
          do
          {
            v9 = (unsigned int)(v9 - 1);
            *(_QWORD *)(v11 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v9);
            v11 -= 8LL;
          }
          while ( (unsigned int)v9 > (unsigned int)v5 );
        }
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v8;
        ++*(_DWORD *)(a1 + 8);
      }
    }
  }
  return (unsigned int)v3;
}
