/*
 * XREFs of ACPIRangeValidatePciMemoryResource @ 0x1C0037284
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C00374D0 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00377D8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddx @ 0x1C00379DC (WPP_RECORDER_SF_ddx.c)
 *     WPP_RECORDER_SF_ddxxxx @ 0x1C0037AD0 (WPP_RECORDER_SF_ddxxxx.c)
 *     WPP_RECORDER_SF_dixxdxxxx @ 0x1C0037C24 (WPP_RECORDER_SF_dixxdxxxx.c)
 */

int ACPIRangeValidatePciMemoryResource(__int64 a1, unsigned int a2, ...)
{
  _UNKNOWN **v2; // rax
  _DWORD *v3; // rbx
  _DWORD *v4; // r14
  char v5; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  ULONGLONG v9; // r8
  unsigned int v10; // esi
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // ecx
  ULONGLONG v15; // rax
  char v16; // di
  char v17; // r12
  char v18; // r14
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  int MinimumAddress; // [rsp+20h] [rbp-A8h]
  int MinimumAddressa; // [rsp+20h] [rbp-A8h]
  ULONGLONG v25; // [rsp+70h] [rbp-58h] BYREF
  ULONGLONG v26; // [rsp+78h] [rbp-50h] BYREF
  _UNKNOWN **v27; // [rsp+80h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  ULONGLONG Alignment; // [rsp+E0h] [rbp+18h] BYREF
  va_list Alignmenta; // [rsp+E0h] [rbp+18h]
  _DWORD *v31; // [rsp+E8h] [rbp+20h]
  va_list va1; // [rsp+F0h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(Alignmenta, a2);
  Alignment = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _DWORD *);
  v2 = &retaddr;
  v3 = E820Info;
  v4 = v31;
  v5 = a2;
  if ( E820Info )
  {
    v7 = 32LL * a2;
    v2 = (_UNKNOWN **)RtlIoDecodeMemIoResource(
                        (PIO_RESOURCE_DESCRIPTOR)(v7 + a1 + 8),
                        (PULONGLONG)Alignmenta,
                        &v26,
                        &v25);
    v10 = 0;
    v27 = v2;
    v11 = (int)v2;
    if ( *((_QWORD *)v3 + 1) )
    {
      v12 = 0LL;
      do
      {
        v13 = 3 * v12;
        v14 = v3[6 * v12 + 8];
        if ( v14 != 2 )
        {
          LODWORD(v2) = v14 - 3;
          if ( (unsigned int)(v14 - 3) <= 1 && v3[2 * v13 + 7] )
          {
            LODWORD(v2) = WPP_RECORDER_SF_ddx(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v8,
                            v9,
                            v11,
                            MinimumAddress,
                            v10,
                            v14,
                            *(_QWORD *)&v3[2 * v13 + 6]);
            v3[2 * v13 + 7] = 0;
            v11 = (int)v27;
          }
          v8 = *(_QWORD *)&v3[2 * v13 + 4];
          if ( v25 >= v8 )
          {
            v9 = v8 + *(_QWORD *)&v3[2 * v13 + 6];
            if ( v26 < v9 )
            {
              WPP_RECORDER_SF_dixxdxxxx(
                WPP_GLOBAL_Control->DeviceExtension,
                v8,
                v9,
                v11,
                MinimumAddress,
                v10,
                v3[2 * v13 + 8],
                v8,
                v9,
                v5,
                *(_QWORD *)(a1 + v7 + 24),
                *(_QWORD *)(a1 + v7 + 32),
                v11,
                Alignment);
              LODWORD(v2) = AcpiOverrideAttributes;
              if ( (AcpiOverrideAttributes & 1) != 0 && v3[2 * v13 + 8] == 4 )
              {
                v15 = *(_QWORD *)&v3[2 * v13 + 4];
                if ( v25 >= v15 )
                {
                  v16 = v26;
                  if ( v26 < v15 )
                  {
                    v17 = v15 - 1;
                    v18 = v15 - v26;
                    LODWORD(v2) = RtlIoEncodeMemIoResource(
                                    (PIO_RESOURCE_DESCRIPTOR)(v7 + a1 + 8),
                                    *(_BYTE *)(a1 + v7 + 9),
                                    v15 - v26,
                                    Alignment,
                                    v26,
                                    v15 - 1);
                    if ( (int)v2 < 0 )
                      return (int)v2;
                    WPP_RECORDER_SF_ddxxxx(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v19,
                      v20,
                      v21,
                      MinimumAddressa,
                      v5,
                      v5,
                      v16,
                      v17,
                      v18,
                      Alignment);
                    v4 = v31;
                  }
                }
                LOBYTE(v8) = 4;
                LODWORD(v2) = WPP_RECORDER_SF_d(
                                WPP_GLOBAL_Control->DeviceExtension,
                                v8,
                                22,
                                13,
                                (__int64)&WPP_188439d352933c43d81bb97719738185_Traceguids,
                                v10);
              }
              else
              {
                ++*v4;
              }
            }
          }
        }
        v11 = (int)v27;
        v12 = ++v10;
      }
      while ( (unsigned __int64)v10 < *((_QWORD *)v3 + 1) );
    }
  }
  return (int)v2;
}
