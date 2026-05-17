/*
 * XREFs of LdrInitializeEnclave @ 0x1800C9810
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     ZwInitializeEnclave @ 0x18009C990 (ZwInitializeEnclave.c)
 *     ZwTerminateEnclave @ 0x18009E170 (ZwTerminateEnclave.c)
 *     sub_18009E970 @ 0x18009E970 (sub_18009E970.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

__int64 __fastcall LdrInitializeEnclave(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  __int64 *v3; // rax
  __int64 *v4; // rbx

  v2 = 0;
  v3 = sub_18001EE04(a2, 1);
  v4 = v3;
  if ( v3 && *((_DWORD *)v3 + 15) )
  {
    if ( *((_DWORD *)v3 + 15) != 1 )
    {
      v2 = -1073741502;
      goto LABEL_10;
    }
  }
  else
  {
    v2 = ZwInitializeEnclave();
    if ( v2 < 0 )
      goto LABEL_10;
  }
  if ( !v4 )
    return (unsigned int)v2;
  *((_DWORD *)v4 + 15) = 1;
  v2 = sub_18009E970();
  if ( v2 < 0 )
    ZwTerminateEnclave();
  else
    *((_DWORD *)v4 + 15) = 2;
LABEL_10:
  if ( v4 )
  {
    RtlLeaveCriticalSection((__int64)(v4 + 2));
    sub_1800C9DEC(v4);
  }
  return (unsigned int)v2;
}
