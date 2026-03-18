/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C001DB40 (NtDCompositionProcessChannelBatchBuffer.c)
 * Callees:
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C000136C (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0001414 (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C001A610 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C001A838 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C001A918 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C001AA60 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C001AC04 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C001ACB8 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C001ADD8 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C001AFC0 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C001B0B0 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C001B1A4 (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C001BF30 (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C001BFA0 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_qqqqq @ 0x1C00DCE08 (Template_qqqqq.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z @ 0x1C0140818 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        DirectComposition::CApplicationChannel *this,
        char *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  char v5; // r10
  DirectComposition::CApplicationChannel *v7; // rbx
  int v8; // edi
  unsigned int *v9; // r8
  int v10; // eax
  char *v11; // rax
  unsigned int v12; // r9d
  int v13; // ecx
  unsigned __int64 v14; // r8
  _DWORD *v15; // rbx
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // ecx
  unsigned __int64 v20; // rdx
  struct DirectComposition::CResourceMarshaler *v21; // rbx
  char v22; // al
  int v23; // eax
  char *v24; // rax
  unsigned int v25; // r10d
  int v26; // ecx
  unsigned __int64 v27; // r8
  struct DirectComposition::CResourceMarshaler *v28; // rbx
  char v29; // al
  int v30; // eax
  char *v31; // r8
  __int64 v32; // r10
  unsigned int v33; // ecx
  char *v34; // r9
  unsigned int v35; // r11d
  int v36; // ecx
  unsigned __int64 v37; // r8
  _DWORD *v38; // rbx
  int v39; // eax
  int Resource; // eax
  char *v41; // rax
  int v42; // r9d
  unsigned int v43; // r11d
  __int64 v44; // r10
  unsigned __int64 v45; // r8
  _DWORD *v46; // rbx
  unsigned __int64 v47; // r8
  int v48; // eax
  __int64 v50; // rcx
  DirectComposition::CApplicationChannel *v51; // rdx
  __int64 v52; // rcx
  DirectComposition::CApplicationChannel *v53; // rdx
  __int64 v54; // rcx
  DirectComposition::CApplicationChannel *v55; // rdx
  unsigned int *v56; // rcx
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // r8
  __int64 v59; // rcx
  DirectComposition::CApplicationChannel *v60; // rdx
  __int64 v61; // rcx
  DirectComposition::CApplicationChannel *v62; // rdx
  const struct tagMsgRoutingInfo *v63; // r9
  void *v64; // rbx
  char *v65; // rax
  __int64 v66; // rax
  unsigned int v67; // eax
  void *v68; // r9
  char *v69; // rcx
  int v70; // ebx
  char v71; // al
  int v72; // r8d
  unsigned int *v73; // [rsp+20h] [rbp-88h]
  char *v74; // [rsp+40h] [rbp-68h]
  char v75; // [rsp+48h] [rbp-60h] BYREF
  char v76; // [rsp+49h] [rbp-5Fh] BYREF
  char v77; // [rsp+4Ah] [rbp-5Eh] BYREF
  char v78; // [rsp+4Bh] [rbp-5Dh] BYREF
  char v79[4]; // [rsp+4Ch] [rbp-5Ch] BYREF
  unsigned int v80; // [rsp+50h] [rbp-58h]
  _DWORD Size[3]; // [rsp+54h] [rbp-54h]
  void *Src; // [rsp+60h] [rbp-48h]
  DirectComposition::CApplicationChannel *v83; // [rsp+68h] [rbp-40h]
  DirectComposition::CApplicationChannel *v84; // [rsp+70h] [rbp-38h]
  DirectComposition::CApplicationChannel *v85; // [rsp+78h] [rbp-30h]
  DirectComposition::CApplicationChannel *v86; // [rsp+80h] [rbp-28h]
  DirectComposition::CApplicationChannel *v87; // [rsp+88h] [rbp-20h]

  v5 = a4;
  v74 = a2;
  v7 = this;
  v87 = this;
  v86 = this;
  v85 = this;
  v84 = this;
  v83 = this;
  v8 = 0;
  while ( v8 >= 0 )
  {
    if ( a3 < 4 )
    {
      if ( a3 )
        return (unsigned int)-1073741811;
      return (unsigned int)v8;
    }
    v9 = a5;
    ++*a5;
    v10 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 8 )
    {
      if ( a3 < 0x18 )
      {
LABEL_183:
        v8 = -1073741811;
      }
      else
      {
        v74 = a2 + 24;
        a3 -= 24;
        v17 = *((_QWORD *)a2 + 2);
        v18 = *((unsigned int *)a2 + 2);
        v80 = *((_DWORD *)a2 + 2);
        v19 = *((_DWORD *)a2 + 1);
        v76 = 0;
        v20 = (unsigned int)(v19 - 1);
        if ( !v19 || v20 >= *((_QWORD *)v7 + 11) )
          goto LABEL_186;
        _mm_lfence();
        v21 = *(struct DirectComposition::CResourceMarshaler **)(v20 * *((_QWORD *)v7 + 12) + *((_QWORD *)v7 + 8));
        if ( !v21 )
        {
          v7 = this;
LABEL_186:
          v8 = -1073741790;
          goto LABEL_30;
        }
        v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, __int64, char *))(*(_QWORD *)v21 + 136LL))(
               v21,
               this,
               v18,
               v17,
               &v76);
        if ( v8 >= 0 && *((_QWORD *)v21 + 4) && DirectComposition::CApplicationChannel::UnbindAnimation(this, v21, v80) )
        {
          v22 = 1;
          v76 = 1;
        }
        else
        {
          v22 = v76;
        }
        if ( v8 >= 0 && v22 && (v23 = *((_DWORD *)v21 + 4), (v23 & 2) == 0) )
        {
          if ( (v23 & 9) == 1 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v21 + 120LL))(
                   v21,
                   100LL) )
            {
              v50 = 432LL;
            }
            else
            {
              v50 = 424LL;
            }
            v51 = v87;
            *((_QWORD *)v21 + 1) = *(_QWORD *)((char *)v87 + v50);
            *(_QWORD *)((char *)v51 + v50) = v21;
          }
          *((_DWORD *)v21 + 4) |= 2u;
          v7 = this;
          *((_BYTE *)this + 256) |= 1u;
        }
        else
        {
LABEL_28:
          v7 = this;
        }
LABEL_29:
        v5 = a4;
LABEL_30:
        a2 = v74;
      }
    }
    else
    {
      switch ( v10 )
      {
        case 9:
          v24 = a2;
          if ( a3 < 0x10 )
          {
            v8 = -1073741811;
          }
          else
          {
            a2 += 16;
            v74 = a2;
            a3 -= 16;
            v25 = *((_DWORD *)v24 + 2);
            v80 = v25;
            v26 = *((_DWORD *)v24 + 1);
            v75 = 0;
            v27 = (unsigned int)(v26 - 1);
            if ( !v26 || v27 >= *((_QWORD *)v7 + 11) )
              goto LABEL_182;
            _mm_lfence();
            v28 = *(struct DirectComposition::CResourceMarshaler **)(v27 * *((_QWORD *)v7 + 12) + *((_QWORD *)v7 + 8));
            if ( !v28 )
            {
              v7 = this;
LABEL_182:
              v8 = -1073741790;
              goto LABEL_43;
            }
            v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, unsigned __int64, char *))(*(_QWORD *)v28 + 144LL))(
                   v28,
                   v25,
                   v27,
                   &v75);
            if ( v8 >= 0
              && *((_QWORD *)v28 + 4)
              && DirectComposition::CApplicationChannel::UnbindAnimation(this, v28, v80) )
            {
              v29 = 1;
              v75 = 1;
            }
            else
            {
              v29 = v75;
            }
            if ( v8 < 0 )
              goto LABEL_41;
            if ( !v29 )
              goto LABEL_41;
            v30 = *((_DWORD *)v28 + 4);
            if ( (v30 & 2) != 0 )
              goto LABEL_41;
            if ( (v30 & 9) == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v28 + 120LL))(
                     v28,
                     100LL) )
              {
                v54 = 432LL;
              }
              else
              {
                v54 = 424LL;
              }
              v55 = v86;
              *((_QWORD *)v28 + 1) = *(_QWORD *)((char *)v86 + v54);
              *(_QWORD *)((char *)v55 + v54) = v28;
            }
            *((_DWORD *)v28 + 4) |= 2u;
            v7 = this;
            *((_BYTE *)this + 256) |= 1u;
            a2 = v74;
LABEL_43:
            v5 = a4;
          }
          break;
        case 11:
          v31 = a2;
          if ( a3 < 0x10 )
          {
            v8 = -1073741811;
          }
          else
          {
            a2 += 16;
            v74 = a2;
            a3 -= 16;
            v32 = *((unsigned int *)v31 + 3);
            v33 = (v32 + 3) & 0xFFFFFFFC;
            if ( v33 < (unsigned int)v32 || a3 < v33 )
            {
LABEL_178:
              v8 = -1073741811;
            }
            else
            {
              v34 = a2;
              a2 += v33;
              v74 = a2;
              a3 -= v33;
              v35 = *((_DWORD *)v31 + 2);
              v36 = *((_DWORD *)v31 + 1);
              v37 = (unsigned int)(v36 - 1);
              if ( v36
                && v37 < *((_QWORD *)v7 + 11)
                && (_mm_lfence(), (v38 = *(_DWORD **)(v37 * *((_QWORD *)v7 + 12) + *((_QWORD *)v7 + 8))) != 0LL) )
              {
                v79[0] = 0;
                v8 = (*(__int64 (__fastcall **)(_DWORD *, DirectComposition::CApplicationChannel *, _QWORD, char *, __int64, char *))(*(_QWORD *)v38 + 160LL))(
                       v38,
                       this,
                       v35,
                       v34,
                       v32,
                       v79);
                if ( v8 >= 0 )
                {
                  if ( v79[0] )
                  {
                    v39 = v38[4];
                    if ( (v39 & 2) == 0 )
                    {
                      if ( (v39 & 9) == 1 )
                      {
                        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v38 + 120LL))(v38, 100LL) )
                          v52 = 432LL;
                        else
                          v52 = 424LL;
                        v53 = v85;
                        *((_QWORD *)v38 + 1) = *(_QWORD *)((char *)v85 + v52);
                        *(_QWORD *)((char *)v53 + v52) = v38;
                      }
                      v38[4] |= 2u;
                      *((_BYTE *)this + 256) |= 1u;
                    }
                  }
                }
                a2 = v74;
              }
              else
              {
                v8 = -1073741790;
              }
              v7 = this;
            }
LABEL_58:
            v5 = a4;
          }
          break;
        case 12:
          v41 = a2;
          if ( a3 >= 0x10 )
          {
            a2 += 16;
            v74 = a2;
            a3 -= 16;
            v42 = *((_DWORD *)v41 + 3);
            v43 = *((_DWORD *)v41 + 2);
            v80 = v43;
            Size[0] = *((_DWORD *)v41 + 1);
            v78 = 0;
            v44 = 0LL;
            v45 = (unsigned int)(Size[0] - 1);
            if ( !Size[0] || v45 >= *((_QWORD *)v7 + 11) )
              goto LABEL_174;
            _mm_lfence();
            v46 = *(_DWORD **)(v45 * *((_QWORD *)v7 + 12) + *((_QWORD *)v7 + 8));
            *(_QWORD *)&Size[1] = v46;
            if ( !v46 )
            {
              v7 = this;
LABEL_174:
              v8 = -1073741790;
              goto LABEL_43;
            }
            if ( v42 )
            {
              v47 = (unsigned int)(v42 - 1);
              if ( v47 >= *((_QWORD *)this + 11)
                || (v44 = *(_QWORD *)(v47 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8))) == 0 )
              {
                v8 = -1073741811;
                goto LABEL_42;
              }
            }
            v8 = (*(__int64 (__fastcall **)(_DWORD *, DirectComposition::CApplicationChannel *, _QWORD, __int64, char *))(*(_QWORD *)v46 + 168LL))(
                   v46,
                   this,
                   v43,
                   v44,
                   &v78);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0
              && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v46 + 120LL))(v46, 102LL)
              && (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
            {
              v70 = v46[6];
              v71 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&Size[1] + 16LL))(*(_QWORD *)&Size[1]);
              Template_qqqqq(
                v80,
                (unsigned int)&DCompResourcePropertyUpdate,
                v72,
                *((_DWORD *)this + 7),
                v70,
                Size[0],
                v71,
                v80);
              v46 = *(_DWORD **)&Size[1];
            }
            if ( v8 < 0 || !v78 || (v48 = v46[4], (v48 & 2) != 0) )
            {
LABEL_41:
              a2 = v74;
LABEL_42:
              v7 = this;
              goto LABEL_43;
            }
            if ( (v48 & 9) == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v46 + 120LL))(v46, 100LL) )
                v59 = 432LL;
              else
                v59 = 424LL;
              v60 = v84;
              *((_QWORD *)v46 + 1) = *(_QWORD *)((char *)v84 + v59);
              *(_QWORD *)((char *)v60 + v59) = v46;
            }
            v46[4] |= 2u;
            v7 = this;
            *((_BYTE *)this + 256) |= 1u;
            a2 = v74;
            goto LABEL_43;
          }
          v8 = -1073741811;
          break;
        default:
          switch ( v10 )
          {
            case 0:
              v64 = 0LL;
              *(_QWORD *)&Size[1] = 0LL;
              v65 = a2;
              if ( a3 >= 0x18 && v5 )
              {
                a2 += 24;
                v74 = a2;
                a3 -= 24;
                Src = (void *)*((_QWORD *)v65 + 1);
                v66 = *((unsigned int *)v65 + 4);
                Size[0] = v66;
                v80 = v66;
                if ( !(_DWORD)v66 )
                  v8 = -1073741811;
                if ( v8 >= 0 )
                {
                  v64 = (void *)Win32AllocPoolWithQuota(v66, 1717715780LL);
                  *(_QWORD *)&Size[1] = v64;
                  a2 = v74;
                  v5 = a4;
                  if ( !v64 )
                  {
                    v8 = -1073741801;
                    goto LABEL_144;
                  }
                  v67 = Size[0];
                  v68 = Src;
                  v69 = (char *)Src + Size[0];
                  if ( v69 < Src || (unsigned __int64)v69 > MmUserProbeAddress )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v64, v68, v67);
                  a2 = v74;
                  LODWORD(v66) = Size[0];
                  v9 = a5;
                  v5 = a4;
                }
                if ( v8 >= 0 )
                {
                  v8 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(this, v64, v66, 0, v9);
                  a2 = v74;
                  v5 = a4;
                }
              }
              else
              {
                v8 = -1073741811;
              }
LABEL_144:
              if ( !v64 )
              {
                v7 = this;
                continue;
              }
              Win32FreePool(v64);
              goto LABEL_41;
            case 1:
              if ( a3 >= 0x10 )
              {
                v74 = a2 + 16;
                a3 -= 16;
                Resource = DirectComposition::CApplicationChannel::CreateResource(
                             v7,
                             *((_DWORD *)a2 + 1),
                             *((_DWORD *)a2 + 2),
                             *((_DWORD *)a2 + 3) != 0);
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 2:
              if ( a3 >= 0x18 )
              {
                v74 = a2 + 24;
                a3 -= 24;
                Resource = DirectComposition::CApplicationChannel::OpenSharedResource(
                             v7,
                             *((_DWORD *)a2 + 1),
                             *((void **)a2 + 1),
                             *((_DWORD *)a2 + 4),
                             *((_DWORD *)a2 + 5) != 0);
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 3:
              if ( a3 >= 8 )
              {
                v74 = a2 + 8;
                a3 -= 8;
                Resource = DirectComposition::CApplicationChannel::ReleaseResource(v7, *((_DWORD *)a2 + 1));
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 4:
              if ( a3 >= 0x18 )
              {
                v74 = a2 + 24;
                a3 -= 24;
                Resource = DirectComposition::CApplicationChannel::GetAnimationTime(
                             v7,
                             *((_DWORD *)a2 + 1),
                             *((_QWORD *)a2 + 1),
                             (__int64 *)a2 + 2);
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 5:
              if ( a3 < 0x20 )
              {
                v8 = -1073741811;
                continue;
              }
              v74 = a2 + 32;
              a3 -= 32;
              LODWORD(v73) = *((_DWORD *)a2 + 4);
              Resource = DirectComposition::CApplicationChannel::CapturePointer(
                           v7,
                           *((unsigned int *)a2 + 1),
                           *((unsigned int *)a2 + 2),
                           *((unsigned int *)a2 + 3),
                           v73,
                           *((_QWORD *)a2 + 3));
              goto LABEL_57;
            case 6:
              if ( a3 >= 0x10 )
              {
                v74 = a2 + 16;
                a3 -= 16;
                Resource = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
                             v7,
                             *((_DWORD *)a2 + 1),
                             (void **)a2 + 1);
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 7:
              v11 = a2;
              if ( a3 < 0xC )
              {
                v8 = -1073741811;
                continue;
              }
              a2 += 12;
              v74 = a2;
              a3 -= 12;
              v12 = *((_DWORD *)v11 + 2);
              v13 = *((_DWORD *)v11 + 1);
              v77 = 0;
              v14 = (unsigned int)(v13 - 1);
              if ( !v13 || v14 >= *((_QWORD *)v7 + 11) )
                goto LABEL_158;
              _mm_lfence();
              v15 = *(_DWORD **)(v14 * *((_QWORD *)v7 + 12) + *((_QWORD *)v7 + 8));
              if ( !v15 )
              {
                v7 = this;
LABEL_158:
                v8 = -1073741790;
                continue;
              }
              v8 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, char *))(*(_QWORD *)v15 + 184LL))(v15, v12, &v77);
              if ( v8 < 0 )
                goto LABEL_28;
              if ( !v77 )
                goto LABEL_28;
              v16 = v15[4];
              if ( (v16 & 2) != 0 )
                goto LABEL_28;
              if ( (v16 & 9) == 1 )
              {
                if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v15 + 120LL))(v15, 100LL) )
                  v61 = 432LL;
                else
                  v61 = 424LL;
                v62 = v83;
                *((_QWORD *)v15 + 1) = *(_QWORD *)((char *)v83 + v61);
                *(_QWORD *)((char *)v62 + v61) = v15;
              }
              v15[4] |= 2u;
              v7 = this;
              *((_BYTE *)this + 256) |= 1u;
              goto LABEL_29;
            case 10:
              if ( a3 >= 0x18 )
              {
                v74 = a2 + 24;
                a3 -= 24;
                Resource = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                             v7,
                             *((_DWORD *)a2 + 1),
                             *((_DWORD *)a2 + 2),
                             *((void **)a2 + 2));
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 13:
              v56 = (unsigned int *)a2;
              if ( a3 < 0x10 )
              {
                v8 = -1073741811;
                continue;
              }
              a2 += 16;
              v74 = a2;
              a3 -= 16;
              v57 = v56[3];
              v58 = 4 * v57;
              if ( (4 * v57) >> 2 == v57 && a3 >= v58 )
              {
                v74 = &a2[v58];
                a3 -= v58;
                Resource = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                             v7,
                             v56[1],
                             v56[2],
                             (const unsigned int *)a2,
                             v57);
                goto LABEL_57;
              }
              goto LABEL_178;
            case 14:
              if ( a3 >= 0x10 )
              {
                v74 = a2 + 16;
                a3 -= 16;
                Resource = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                             v7,
                             *((_DWORD *)a2 + 1),
                             *((_DWORD *)a2 + 2),
                             *((_DWORD *)a2 + 3));
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 15:
              if ( a3 >= 0x10 )
              {
                v74 = a2 + 16;
                a3 -= 16;
                Resource = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                             v7,
                             *((_DWORD *)a2 + 1),
                             *((_QWORD *)a2 + 1));
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 16:
              if ( a3 >= 0x14 )
              {
                v74 = a2 + 20;
                a3 -= 20;
                Resource = DirectComposition::CApplicationChannel::AddVisualChild(
                             v7,
                             *((_DWORD *)a2 + 1),
                             *((_DWORD *)a2 + 2),
                             *((_DWORD *)a2 + 3),
                             *((_DWORD *)a2 + 4));
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 17:
              if ( a3 < 0x48 )
              {
                v8 = -1073741811;
                continue;
              }
              v74 = a2 + 72;
              a3 -= 72;
              if ( *((_DWORD *)a2 + 6) )
                v63 = (const struct tagMsgRoutingInfo *)(a2 + 32);
              else
                v63 = 0LL;
              Resource = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                           v7,
                           *((_DWORD *)a2 + 1),
                           *((HWND *)a2 + 1),
                           v63,
                           *((_DWORD *)a2 + 4),
                           *((_DWORD *)a2 + 5));
              goto LABEL_57;
            case 18:
              if ( a3 >= 0x10 )
              {
                v74 = a2 + 16;
                a3 -= 16;
                Resource = DirectComposition::CApplicationChannel::SetVisualInputSink(
                             v7,
                             *((_DWORD *)a2 + 1),
                             *((void **)a2 + 1));
                goto LABEL_57;
              }
              v8 = -1073741811;
              continue;
            case 19:
              if ( a3 < 0xC )
              {
                v8 = -1073741811;
                continue;
              }
              v74 = a2 + 12;
              a3 -= 12;
              Resource = DirectComposition::CApplicationChannel::RemoveVisualChild(
                           v7,
                           *((_DWORD *)a2 + 1),
                           *((_DWORD *)a2 + 2));
LABEL_57:
              v8 = Resource;
              a2 = v74;
              break;
            default:
              goto LABEL_183;
          }
          goto LABEL_58;
      }
    }
  }
  return (unsigned int)v8;
}
