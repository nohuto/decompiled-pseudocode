/*
 * XREFs of sub_18010B78C @ 0x18010B78C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x18006D010 (RtlGetExtendedContextLength.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwGetNextThread @ 0x18009C8D0 (ZwGetNextThread.c)
 *     sub_18010BAC8 @ 0x18010BAC8 (sub_18010BAC8.c)
 *     sub_18010BCFC @ 0x18010BCFC (sub_18010BCFC.c)
 */

__int64 __fastcall sub_18010B78C(__int64 a1, __int64 a2, __int16 a3, unsigned int a4)
{
  unsigned int v5; // r14d
  int NextThread; // edi
  int v7; // esi
  unsigned __int64 v8; // rcx
  int v10; // [rsp+70h] [rbp-21h]
  __int64 v11; // [rsp+80h] [rbp-11h]
  int v12; // [rsp+88h] [rbp-9h]

  v12 = a3 & 0x100;
  v5 = 0;
  NextThread = ZwGetNextThread();
  if ( NextThread != -2147483622 )
  {
    do
    {
      if ( NextThread < 0 )
        goto LABEL_12;
      NextThread = ZwAllocateVirtualMemory();
      if ( NextThread < 0 )
        goto LABEL_12;
      MEMORY[8] = -4;
      ++v5;
      MEMORY[0xC] = v10;
      MEMORY[0xA] = 1;
      NextThread = ZwGetNextThread();
    }
    while ( NextThread != -2147483622 );
    if ( !v5 )
      return 0LL;
    v7 = 0;
    if ( v12 )
    {
      if ( (a3 & 0x200) == 0 || (v7 = 0, (int)RtlGetExtendedContextLength(a4) < 0) )
        v7 = 1232;
    }
    *(_DWORD *)(a1 + 1024) = v7;
    v8 = v5 * (unsigned __int64)(((v7 + 15) & 0xFFFFFFF0) + 128);
    if ( v8 > 0xFFFFFFFF )
    {
      NextThread = -1073741675;
LABEL_12:
      sub_18010BCFC(0LL);
      return (unsigned int)NextThread;
    }
    NextThread = ZwCreateSection();
    if ( NextThread < 0 )
      goto LABEL_12;
    NextThread = ZwMapViewOfSection();
    if ( NextThread < 0 )
    {
      ZwClose();
      goto LABEL_12;
    }
    ZwUnmapViewOfSection();
    sub_18010BCFC(0LL);
    *(_QWORD *)(a1 + 1000) = 0LL;
    *(_QWORD *)(a1 + 1008) = v11;
    *(_DWORD *)(a1 + 992) = 0;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
  }
  return 0LL;
}
