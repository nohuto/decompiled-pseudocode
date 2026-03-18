/*
 * XREFs of ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1C010CAAC
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0019A3C (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppqqt @ 0x1C0028294 (McTemplateK0ppqqt.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C010E014 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1C010E034 (-GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReplaceDisplayedAllocation(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        const struct DXGALLOCATION *a3)
{
  const struct DXGALLOCATION *v3; // r15
  unsigned int v5; // r14d
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  char v11; // r12
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _DISPLAY_PLANE_CONFIG *DisplayPlaneConfigHead; // rsi
  __int64 v16; // r8
  int PreviousConfigIndex; // r15d
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  _BYTE v30[88]; // [rsp+40h] [rbp-58h] BYREF
  int v31; // [rsp+A0h] [rbp+8h]
  const struct DXGALLOCATION *v33; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+20h]

  v33 = a3;
  v3 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (ADAPTER_DISPLAY *)((char *)this + 400), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  v5 = 0;
  v31 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v6 = *((_QWORD *)this + 14);
    do
    {
      v7 = 0;
      v8 = 3760LL * v5;
      v34 = v5;
      v9 = v6;
      if ( *(_DWORD *)(v8 + v6 + 3736) )
      {
        do
        {
          LODWORD(v33) = 0;
          v11 = 1;
          v12 = 168LL * v7;
          DisplayPlaneConfigHead = GetDisplayPlaneConfigHead(
                                     (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v8 + v12 + 1120 + v6),
                                     (int *)&v33);
          if ( DisplayPlaneConfigHead )
          {
            PreviousConfigIndex = (int)v33;
            while ( *(const struct DXGALLOCATION **)DisplayPlaneConfigHead != a2 )
            {
              v11 = 0;
              v18 = *((_QWORD *)this + 14) + v8 + v12;
              if ( *(_DWORD *)(v18 + 1120) == -1 )
              {
                v20 = WdLogNewEntry5_WdAssertion(v14);
                *(_QWORD *)(v20 + 24) = 8210LL;
                WdLogEvent5_WdAssertion(v20);
              }
              v19 = *(_DWORD *)(v18 + 1124);
              if ( v19 == -1 )
              {
                v21 = WdLogNewEntry5_WdAssertion(v14);
                *(_QWORD *)(v21 + 24) = 8211LL;
                WdLogEvent5_WdAssertion(v21);
                v19 = *(_DWORD *)(v18 + 1124);
              }
              if ( PreviousConfigIndex != v19 )
              {
                PreviousConfigIndex = GetPreviousConfigIndex(PreviousConfigIndex);
                v14 = 80LL * PreviousConfigIndex;
                DisplayPlaneConfigHead = (struct _DISPLAY_PLANE_CONFIG *)(v14 + v18 + 1128);
                if ( DisplayPlaneConfigHead )
                  continue;
              }
              v3 = a2;
              goto LABEL_19;
            }
            *(_QWORD *)DisplayPlaneConfigHead = 0LL;
            if ( v11 )
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v16);
              v3 = a2;
              v22[4] = v5;
              v22[5] = v7;
              v22[3] = a2;
              WdLogEvent5_WdWarning(v22);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v25 = *((_QWORD *)this + 14);
                LODWORD(v29) = *(unsigned __int8 *)(v8 + v25 + 721);
                LODWORD(v28) = v7;
                LODWORD(v27) = v5;
                McTemplateK0ppqqt(
                  *(unsigned __int8 *)(v8 + v25 + 721),
                  v23,
                  v24,
                  *((_QWORD *)this + 2),
                  a2,
                  v27,
                  v28,
                  v29);
              }
            }
            else
            {
              v3 = a2;
            }
            *((_DWORD *)DisplayPlaneConfigHead + 2) &= ~1u;
          }
LABEL_19:
          v9 = *((_QWORD *)this + 14);
          ++v7;
          v6 = v9;
        }
        while ( v7 < *(_DWORD *)(v8 + v9 + 3736) );
      }
      v10 = 0LL;
      v6 = v9;
      if ( *(_DWORD *)(v8 + v9 + 3740) )
      {
        v6 = *((_QWORD *)this + 14);
        v26 = v34;
        do
        {
          if ( *(_BYTE *)(v10 + v8 + v9 + 2880)
            && (*(_DWORD *)(v9 + 80 * ((unsigned int)v10 + 47 * v26) + 2904) & 1) != 0
            && *(const struct DXGALLOCATION **)(v9 + 80 * ((unsigned int)v10 + 47 * v26) + 2896) == v3 )
          {
            *(_QWORD *)(v9 + 80 * ((unsigned int)v10 + 47 * v26) + 2896) = 0LL;
            *(_BYTE *)(v10 + v8 + *((_QWORD *)this + 14) + 2880) = 0;
            *(_DWORD *)(*((_QWORD *)this + 14) + 80 * ((unsigned int)v10 + 47 * v26) + 2904) &= ~1u;
            v6 = *((_QWORD *)this + 14);
          }
          v10 = (unsigned int)(v10 + 1);
          v9 = v6;
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v8 + v6 + 3740) );
        v5 = v31;
      }
      v31 = ++v5;
    }
    while ( v5 < *((_DWORD *)this + 20) );
  }
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
}
