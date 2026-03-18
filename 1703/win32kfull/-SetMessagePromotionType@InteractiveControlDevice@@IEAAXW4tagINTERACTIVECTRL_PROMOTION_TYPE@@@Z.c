/*
 * XREFs of ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0220C60
 * Callers:
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0220A08 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C022062C (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 */

void __fastcall InteractiveControlDevice::SetMessagePromotionType(__int64 a1, int a2)
{
  int v4; // r8d
  struct InteractiveControlManager *v5; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 64) != a2 )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
    {
      v5 = InteractiveControlManager::Instance();
      v6 = 0;
      v4 = *((_DWORD *)v5 + 27);
    }
    else
    {
      v4 = 0;
      v6 = 1;
    }
    *(_DWORD *)(a1 + 64) = a2;
    InteractiveControlDevice::SetComponentResolution(a1, 3, v4, &v6);
  }
}
