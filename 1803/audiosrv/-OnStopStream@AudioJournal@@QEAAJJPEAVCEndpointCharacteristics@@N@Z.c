/*
 * XREFs of ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x1800993F8
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180048240 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     wil::details::ThreadFailureCallbackFn__lambda_f8c33e8c7853840d759a4f62d4296076___::NotifyFailure @ 0x1800C1F70 (wil--details--ThreadFailureCallbackFn__lambda_f8c33e8c7853840d759a4f62d4296076___--NotifyFailure.c)
 * Callees:
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x180007770 (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x18002A2E0 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z @ 0x1800DB674 (-AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioJournal::OnStopStream(
        AudioJournal *this,
        int a2,
        struct CEndpointCharacteristics *a3,
        double a4)
{
  AudioJournal *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  int StreamInfo; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct AudioJournal::StreamInfo *v13; // rdx
  struct AudioJournal::StreamInfo *v15[4]; // [rsp+20h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  AudioJournal *v17; // [rsp+60h] [rbp+10h] BYREF

  v17 = this;
  v15[1] = (struct AudioJournal::StreamInfo *)-2LL;
  EnterCriticalSection(&stru_18018A398);
  v15[2] = (struct AudioJournal::StreamInfo *)&stru_18018A398;
  if ( g_AudioJournal )
  {
    StreamInfo = AudioJournal::FindStreamInfo(v6, a3, v15, (int *)&v17);
    v7 = StreamInfo;
    if ( StreamInfo >= 0 )
    {
      v11 = 200LL * (int)v17;
      if ( a2 >= 0 )
      {
        *(double *)((char *)v15[0] + v11 + 168) = a4 + *(double *)((char *)v15[0] + v11 + 168);
      }
      else
      {
        ++*(_DWORD *)((char *)v15[0] + v11 + 164);
        AudioJournal::AddError(
          (AudioJournal *)(200LL * (int)v17),
          a2,
          (struct AudioJournal::StreamInfo *)((char *)v15[0] + 200 * (int)v17 + 176));
      }
      v12 = 200LL * (int)v17;
      v13 = v15[0];
      if ( !*(_DWORD *)((char *)v15[0] + v12 + 148) )
      {
        *(_DWORD *)((char *)v15[0] + v12 + 148) = 1;
        v13 = v15[0];
      }
      StreamInfo = AudioJournal::WriteStreamInfo((AudioJournal *)&g_AudioJournal, v13);
      v7 = StreamInfo;
      if ( StreamInfo >= 0 )
      {
        v7 = 0;
        goto LABEL_15;
      }
      v9 = 338LL;
    }
    else
    {
      v9 = 316LL;
    }
    v8 = (unsigned int)StreamInfo;
  }
  else
  {
    v7 = -2147418113;
    v8 = 2147549183LL;
    v9 = 314LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
    (const char *)v8);
LABEL_15:
  LeaveCriticalSection(&stru_18018A398);
  return v7;
}
