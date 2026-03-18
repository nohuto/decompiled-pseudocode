/*
 * XREFs of ACPIMatchKernelPorts @ 0x1C002DE30
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000CF60 (ACPIBuildProcessDevicePhaseCrs.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 */

char __fastcall ACPIMatchKernelPorts(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v3; // bl
  char v6; // r14
  void *v7; // r12
  void *QuadPart; // rbp
  void *v9; // r13
  char result; // al
  unsigned __int16 v11; // r15
  unsigned __int64 v12; // rax
  const char *v13; // rcx
  const char *v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // r9
  __int64 v17; // r9
  int v18; // [rsp+50h] [rbp-58h] BYREF
  char v19; // [rsp+58h] [rbp-50h]
  void *v20; // [rsp+60h] [rbp-48h]
  unsigned int v22; // [rsp+C0h] [rbp+18h]
  __int64 v23; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = 0;
  v22 = 0;
  v6 = *(_BYTE *)v2;
  v23 = 32LL;
  v7 = 0LL;
  QuadPart = 0LL;
  v9 = 0LL;
  if ( (int)HeadlessDispatch(16LL, 0LL, 0LL, &v18, &v23) >= 0 && v18 == 1 && v19 )
    v7 = v20;
  result = KdComPortInUse;
  if ( KdComPortInUse || KdHvComPortInUse || v7 )
  {
    if ( KdComPortInUse )
      QuadPart = (void *)KdComPortInUse;
    result = KdHvComPortInUse;
    if ( KdHvComPortInUse )
      v9 = (void *)KdHvComPortInUse;
    if ( *(_DWORD *)(a2 + 24) )
    {
      do
      {
        if ( v6 < 0 )
        {
          v11 = *(_WORD *)(v2 + 1) + 3;
        }
        else
        {
          result = v6 & 7;
          v11 = (v6 & 7) + 1;
          v6 &= 0x78u;
        }
        switch ( v6 )
        {
          case 'x':
            return result;
          case '@':
            v12 = *(unsigned __int16 *)(v2 + 2);
            break;
          case 'H':
            v12 = *(_WORD *)(v2 + 1) & 0x3FF;
            break;
          default:
            switch ( (unsigned __int8)v6 )
            {
              case 0x87u:
                if ( *(_BYTE *)(v2 + 3) )
                {
                  if ( *(_BYTE *)(v2 + 3) != 1 )
                    goto LABEL_48;
                }
                else if ( QuadPart )
                {
                  QuadPart = (void *)MmGetPhysicalAddress(QuadPart).QuadPart;
                }
                v12 = (unsigned int)(*(_DWORD *)(v2 + 10) + *(_DWORD *)(v2 + 18));
                break;
              case 0x88u:
                if ( *(_BYTE *)(v2 + 3) )
                {
                  if ( *(_BYTE *)(v2 + 3) != 1 )
                    goto LABEL_48;
                }
                else if ( QuadPart )
                {
                  QuadPart = (void *)MmGetPhysicalAddress(QuadPart).QuadPart;
                }
                v12 = *(unsigned __int16 *)(v2 + 12) + (unsigned int)*(unsigned __int16 *)(v2 + 8);
                break;
              case 0x8Au:
                if ( *(_BYTE *)(v2 + 3) )
                {
                  if ( *(_BYTE *)(v2 + 3) != 1 )
                    goto LABEL_48;
                }
                else if ( QuadPart )
                {
                  QuadPart = (void *)MmGetPhysicalAddress(QuadPart).QuadPart;
                }
                v12 = *(_QWORD *)(v2 + 14) + *(_QWORD *)(v2 + 30);
                break;
              default:
                goto LABEL_48;
            }
            break;
        }
        if ( KdComPortInUse && (void *)v12 == QuadPart
          || KdHvComPortInUse && (void *)v12 == v9
          || v7 && (void *)v12 == v7 )
        {
          _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x680003uLL);
          if ( KdComPortInUse && (void *)v12 == QuadPart || KdHvComPortInUse && (void *)v12 == v9 )
          {
            v13 = (const char *)&unk_1C005B1F0;
            v14 = (const char *)&unk_1C005B1F0;
            if ( a1 )
            {
              v15 = *(_QWORD *)(a1 + 8);
              v3 = a1;
              if ( (v15 & 0x200000000000LL) != 0 )
              {
                v13 = *(const char **)(a1 + 560);
                if ( (v15 & 0x400000000000LL) != 0 )
                  v14 = *(const char **)(a1 + 568);
              }
            }
            v16 = 13;
          }
          else
          {
            v13 = (const char *)&unk_1C005B1F0;
            v14 = (const char *)&unk_1C005B1F0;
            if ( a1 )
            {
              v17 = *(_QWORD *)(a1 + 8);
              v3 = a1;
              if ( (v17 & 0x200000000000LL) != 0 )
              {
                v13 = *(const char **)(a1 + 560);
                if ( (v17 & 0x400000000000LL) != 0 )
                  v14 = *(const char **)(a1 + 568);
              }
            }
            v16 = 14;
          }
          return WPP_RECORDER_SF_qqss(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   4u,
                   6u,
                   v16,
                   (__int64)&WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids,
                   v12,
                   v3,
                   v13,
                   v14);
        }
LABEL_48:
        v2 += v11;
        v22 += v11;
        result = a2;
        v6 = *(_BYTE *)v2;
      }
      while ( v22 < *(_DWORD *)(a2 + 24) );
    }
  }
  return result;
}
