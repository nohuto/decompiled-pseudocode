/*
 * XREFs of TraceDxgkDevice @ 0x1C0026660
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqpttq @ 0x1C0026108 (McTemplateK0ppqpttq.c)
 */

NTSTATUS __fastcall TraceDxgkDevice(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        int a8)
{
  __int64 v9; // rcx
  const EVENT_DESCRIPTOR *v10; // rdx
  NTSTATUS result; // eax
  int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+48h] [rbp-10h]

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        return result;
      v9 = a7;
      v14 = a8;
      v13 = a7;
      v12 = a6;
      v10 = (const EVENT_DESCRIPTOR *)&EventDestroyDevice;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        return result;
      v9 = a7;
      v14 = a8;
      v13 = a7;
      v12 = a6;
      v10 = (const EVENT_DESCRIPTOR *)&EventReportDevice;
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      return result;
    v9 = a7;
    v10 = (const EVENT_DESCRIPTOR *)&EventCreateDevice;
    v14 = a8;
    v13 = a7;
    v12 = a6;
  }
  return McTemplateK0ppqpttq(v9, v10, a3, a3, a2, a4, a5, v12, v13, v14);
}
