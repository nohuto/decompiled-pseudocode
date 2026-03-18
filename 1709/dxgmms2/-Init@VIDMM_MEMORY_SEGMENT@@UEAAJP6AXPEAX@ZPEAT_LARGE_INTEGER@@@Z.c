/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C001659C (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C0016624 (--0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0023F3C (-BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007C210 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(PHYSICAL_ADDRESS *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  __int64 v3; // rdi
  bool v6; // zf
  VIDMM_CPU_HOST_APERTURE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  VIDMM_CPU_HOST_APERTURE *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v23; // rax
  PHYSICAL_ADDRESS v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // ecx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  int v32; // edi
  unsigned int v33; // esi
  __int64 v34; // rax
  VIDMM_CPU_HOST_APERTURE *QuadPart; // rcx
  _QWORD SystemInformation[4]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v23 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v23 + 24) = this[2].LowPart;
    *(_QWORD *)(v23 + 32) = this;
  }
  this[10].LowPart |= 0x10u;
  if ( (this[10].LowPart & 0x40) != 0 )
  {
    v24.QuadPart = (unsigned int)(qword_1C0040470 - 0x800000);
    if ( this[8].QuadPart > (unsigned __int64)v24.QuadPart )
    {
      v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)((PHYSICAL_ADDRESS)v24.QuadPart, a2);
      *(_QWORD *)(v25 + 24) = 261LL;
      WdLogEvent5_WdAssertion(v25);
      return 3221225473LL;
    }
    *(_QWORD *)(this[1].QuadPart + 6456) += this[6].QuadPart;
  }
  v6 = (this[10].LowPart & 0x2000) == 0;
  this[26] = this[6];
  if ( v6 )
  {
LABEL_9:
    v17 = VIDMM_SEGMENT::Init(this, a2, 0LL);
    if ( v17 >= 0 && (this[10].LowPart & 0x2000) != 0 )
    {
      if ( this[11].LowPart )
      {
        v15 = *(_QWORD *)(this[1].QuadPart + 24);
        v16 = *(unsigned int *)(v15 + 300);
        if ( (v16 & 0x8000) != 0 && (v16 & 0x10000) != 0 )
        {
          memset(SystemInformation, 0, sizeof(SystemInformation));
          if ( ZwQuerySystemInformation(
                 MaxSystemInfoClass|SystemTimeAdjustmentInformation,
                 SystemInformation,
                 0x20u,
                 0LL) >= 0 )
          {
            if ( LODWORD(SystemInformation[3]) == 1 )
              goto LABEL_27;
            if ( LODWORD(SystemInformation[3]) == 2 )
            {
LABEL_26:
              v28 = 4;
LABEL_28:
              v29 = SystemInformation[0] >> 12;
              v30 = (unsigned int)(LODWORD(SystemInformation[2]) * HIDWORD(SystemInformation[1]) * v28);
              LOBYTE(v3) = (v30 & 0xFFF) != 0;
              v15 = this[4].QuadPart >> 12;
              v31 = (v30 >> 12) + (SystemInformation[0] >> 12) + v3 - 1;
              v16 = v15 + this[5].LowPart - 1;
              if ( v15 > SystemInformation[0] >> 12 )
                v29 = this[4].QuadPart >> 12;
              if ( v16 < v31 )
                v31 = v15 + this[5].LowPart - 1;
              if ( v29 <= v31 )
              {
                v32 = v31 - v29;
                v33 = v29 - v15;
                v34 = WdLogNewEntry5_WdEvent(v16, v15);
                *(_QWORD *)(v34 + 24) = v33;
                *(_QWORD *)(v34 + 32) = (unsigned int)(v32 + 1);
                WdLogEvent5_WdEvent(v34);
                QuadPart = (VIDMM_CPU_HOST_APERTURE *)this[61].QuadPart;
                this[11].HighPart = v33;
                this[12].LowPart = v33 + v32;
                v17 = VIDMM_CPU_HOST_APERTURE::BlockRange(
                        QuadPart,
                        (struct VIDMM_CPU_HOST_APERTURE_RANGE *)((char *)&this[11].QuadPart + 4));
              }
              goto LABEL_12;
            }
            v16 = (unsigned int)(LODWORD(SystemInformation[3]) - 3);
            if ( LODWORD(SystemInformation[3]) == 3 )
            {
LABEL_27:
              v28 = 3;
              goto LABEL_28;
            }
            if ( LODWORD(SystemInformation[3]) == 4 )
              goto LABEL_26;
          }
        }
      }
    }
LABEL_12:
    BYTE1(this[59].LowPart) = 1;
    v18 = WdLogNewEntry5_WdEvent(v16, v15);
    WdLogEvent5_WdEvent(v18);
    v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
    v21[3] = this[6].QuadPart;
    v21[4] = this[3].HighPart;
    v21[5] = this[3].LowPart;
    v21[6] = this[2].LowPart;
    WdLogEvent5_WdEvent(v21);
    return (unsigned int)v17;
  }
  v7 = (VIDMM_CPU_HOST_APERTURE *)operator new[](0x48uLL, 0x35346956u, PagedPool);
  if ( v7 )
    v10 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(v7);
  else
    v10 = 0LL;
  this[61].QuadPart = (LONGLONG)v10;
  if ( v10 )
  {
    v11 = VIDMM_CPU_HOST_APERTURE::Init(v10, (struct VIDMM_MEMORY_SEGMENT *)this, this[4].QuadPart, this[5].LowPart);
    v14 = v11;
    if ( v11 >= 0 )
      goto LABEL_9;
    v27 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v27 + 24) = v14;
    WdLogEvent5_WdAssertion(v27);
    return (unsigned int)v14;
  }
  else
  {
    _InterlockedIncrement(&dword_1C0040680);
    v26 = WdLogNewEntry5_WdLowResource(v9, v8);
    *(_QWORD *)(v26 + 24) = 291LL;
    WdLogEvent5_WdLowResource(v26);
    return 3221225495LL;
  }
}
