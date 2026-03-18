/*
 * XREFs of ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C00140A4
 * Callers:
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x1C000B540 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 *     ?Release@CAdapter@@UEAAJXZ @ 0x1C00140E0 (-Release@CAdapter@@UEAAJXZ.c)
 * Callees:
 *     ??1CAdapter@@IEAA@XZ @ 0x1C00141B0 (--1CAdapter@@IEAA@XZ.c)
 */

CAdapter *__fastcall CAdapter::`scalar deleting destructor'(CAdapter *P)
{
  CAdapter::~CAdapter(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
